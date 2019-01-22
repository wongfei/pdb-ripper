#pragma once

struct UdtNode;
typedef std::shared_ptr<UdtNode> UdtNodePtr;

static inline void insert(std::unordered_map<std::wstring, UdtNodePtr>& map, const std::wstring& name, UdtNodePtr node) {
	map.insert(std::pair<const std::wstring, UdtNodePtr>(name, node));
}

struct UdtNode
{
	ComRef<IDiaSymbol> symbol;
	DWORD id;
	std::wstring name;
	std::unordered_map<std::wstring, ComRef<IDiaSymbol> > dep_s;
	std::unordered_map<std::wstring, UdtNodePtr> dep_n;
};

struct UdtGraph
{
	std::unordered_map<std::wstring, UdtNodePtr> nodes;

	inline bool contains(const std::wstring& name) const {
		return (nodes.find(name) != nodes.end());
	}

	inline void insert(const std::wstring& name, UdtNodePtr node) {
		::insert(nodes, name, node);
	}

	inline void insert(UdtNodePtr node) {
		insert(node->name, node);
	}
};
typedef std::shared_ptr<UdtGraph> UdtGraphPtr;

struct ResolvedUdtGraph
{
	std::vector<UdtNodePtr> nodes;

	#if defined(_DEBUG)
	std::vector<std::wstring> names;
	#endif
};
typedef std::shared_ptr<ResolvedUdtGraph> ResolvedUdtGraphPtr;

//
// PARSER
//

static size_t find_end_scope(const std::wstring& s, size_t pos)
{
	size_t depth = 1;
	size_t len = s.length();
	for (size_t i = pos + 1; i < len; ++i)
	{
		if (s[i] == '<') depth++;
		else if (s[i] == '>') depth--;
		if (depth == 0)
		{
			return i;
		}
	}
	return s.npos;
}

void parse_cpp_type(const std::wstring& input, std::unordered_set<std::wstring>& tags, int depth = 0)
{
	//wprintf(L"parse: %s\n", input.c_str());
	std::wstring s(input);
	for (;;)
	{
		auto p1 = s.find_first_of(L'<');
		if (p1 != s.npos)
		{
			auto comma = s.find_first_of(L',');
			if (comma != s.npos && comma < p1)
			{
				auto inner = s.substr(0, comma);
				trim(inner);
				if (!inner.empty())
				{
					parse_cpp_type(inner, tags, depth + 1);
				}

				s = s.substr(comma + 1);
			}
			else
			{
				auto p2 = find_end_scope(s, p1);
				if (p2 != s.npos)
				{
					auto tag = s.substr(0, p2 + 1);
					trim(tag);
					if (!tag.empty())
					{
						if (tags.find(tag) == tags.end())
						{
							//wprintf(L"tag: %s\n", tag.c_str());
							tags.insert(tag);
						}
					}

					auto inner = s.substr(p1 + 1, p2 - p1 - 1);
					trim(inner);
					if (!inner.empty())
					{
						parse_cpp_type(inner, tags, depth + 1);
					}

					s = s.substr(p2 + 1);
				}
			}
		}
		else
		{
			auto parts = split(s, L",");
			for (auto& tag : parts)
			{
				trim(tag);
				if (!tag.empty())
				{
					if (tags.find(tag) == tags.end())
					{
						//wprintf(L"tag: %s\n", tag.c_str());
						tags.insert(tag);
					}
				}
			}
			break;
		}
	}

	return;
}

//
// GET DEPS
//

static void ProcessDepType(IDiaSymbol* global, std::unordered_map<std::wstring, ComRef<IDiaSymbol> >& deps, const wchar_t* cppType)
{
	std::unordered_set<std::wstring> tags;
	parse_cpp_type(cppType, tags);

	for (auto& tag : tags) {
		if (IsAllowedName(tag.c_str())) {

			if (deps.find(tag) == deps.end()) {
				auto sym = FindSymbol(global, SymTagNull, tag.c_str());
				deps.insert(std::pair<const std::wstring, ComRef<IDiaSymbol> >(tag, sym));
			}
		}
	}
}

static void ProcessDepType(IDiaSymbol* global, std::unordered_map<std::wstring, ComRef<IDiaSymbol> >& deps, ComRef<IDiaSymbol>& sym)
{
	DWORD symTag;
	if (sym->get_symTag(&symTag) != S_OK) return;

	switch (symTag)
	{
		case SymTagEnum:
		case SymTagUDT: 
		{
			Bstr name;
			sym->get_name(&name);
			ProcessDepType(global, deps, *name);
			break;
		}

		case SymTagPointerType:
		{
			BOOL isRef = FALSE;
			sym->get_reference(&isRef);
			{
				#if defined(_DEBUG)
				Bstr name;
				sym->get_name(&name);
				#endif

				ComRef<IDiaSymbol> ptrType;
				if (sym->get_type(&ptrType) == S_OK) {

					DWORD ptrTypeTag = 0;
					ptrType->get_symTag(&ptrTypeTag);

					if (ptrTypeTag == SymTagUDT || ptrTypeTag == SymTagEnum) {

						Bstr typeName;
						if (ptrType->get_name(&typeName) == S_OK && wcslen(*typeName) > 0) {

							std::wstring argt;
							if (isRef) {
								argt.assign(*typeName);
							}
							else {
								//DWORD kind = 0;
								//ptrType->get_udtKind(&kind);
								//argt.append(rgUdtKind[kind]);
								//argt.append(L" ");
								argt.append(*typeName);
								argt.append(L" *");
							}

							ProcessDepType(global, deps, argt.c_str());
						}
					}
				}
			}
			break;
		}

		case SymTagArrayType:
		{
			ComRef<IDiaSymbol> arrType;
			if (sym->get_type(&arrType) == S_OK) {
				ProcessDepType(global, deps, arrType);
			}
			break;
		}
	}

	return;
}

static void GetUdtDeps(IDiaSymbol *pGlobal, IDiaSymbol *pUDT, std::unordered_map<std::wstring, ComRef<IDiaSymbol> >& deps)
{
	DWORD symTag;
	if (pUDT->get_symTag(&symTag) != S_OK) return;
	if (symTag != SymTagUDT) return;

	Bstr udtName;
	pUDT->get_name(&udtName);

	SymbolEnumerator iter;

	// base class
	{
		if (iter.Find(pUDT, SymTagBaseClass, NULL)) {
			while (iter.Next()) {

				Bstr name;
				iter->get_name(&name);
				std::wstring sname(*name);

				if (deps.find(sname) == deps.end()) {
					deps.insert(std::pair<const std::wstring, ComRef<IDiaSymbol> >(sname, iter.ref()));
				}

				GetUdtDeps(pGlobal, *iter, deps);
			}
		}
	}

	// data
	{
		if (iter.Find(pUDT, SymTagData, NULL)) {
			while (iter.Next()) {

				DWORD dataKind;
				iter->get_dataKind(&dataKind);

				if (dataKind == DataIsMember) {

					ComRef<IDiaSymbol> fieldType;
					if (iter->get_type(&fieldType) == S_OK) {
						ProcessDepType(pGlobal, deps, fieldType);
					}
				}
			}
		}
	}

	// funcs
	{
		if (iter.Find(pUDT, SymTagFunction, NULL)) {
			while (iter.Next()) {

				#if defined (_DEBUG)
				Bstr name;
				iter->get_name(&name);
				#endif

				ComRef<IDiaSymbol> funcType;
				iter->get_type(&funcType);

				ComRef<IDiaSymbol> returnType;
				if (funcType->get_type(&returnType) == S_OK) {
					ProcessDepType(pGlobal, deps, returnType);
				}

				SymbolEnumerator arg;
				if (arg.Find(*funcType, SymTagNull, NULL)) {
					while (arg.Next()) {

						ComRef<IDiaSymbol> argType;
						if (arg->get_type(&argType) == S_OK) {
							ProcessDepType(pGlobal, deps, argType);
						}
					}
				}
			}
		}
	}

	// remove self
	std::wstring key(*udtName);
	auto inode = deps.find(key);
	if (inode != deps.end())
	{
		deps.erase(inode);
	}
}

//
// GET GRAPH
//

static UdtGraphPtr GetUdtGraph(IDiaSymbol* global, const wchar_t* filter = nullptr)
{
	UdtGraphPtr result(std::make_shared<UdtGraph>());

	SymbolEnumerator sym;
	if (sym.Find(global, SymTagUDT, filter)) {
		while (sym.Next()) {

			Bstr name;
			if (sym->get_name(&name) == S_OK) {

				std::wstring sname(*name);
				if (IsAllowedName(sname.c_str())) {

					if (!result->contains(sname)) {

						DWORD id;
						sym->get_symIndexId(&id);

						auto node = std::make_shared<UdtNode>();
						node->symbol = sym.ref();
						node->id = id;
						node->name = sname;
						result->insert(node);

						GetUdtDeps(global, *sym, node->dep_s);
					}
				}
			}
		}
	}

	// map dep_s to dep_n
	for (auto& inode : result->nodes) {
		auto node = inode.second;

		for (auto& isym : node->dep_s) {

			if (node->dep_n.find(isym.first) == node->dep_n.end()) {

				auto idepN = result->nodes.find(isym.first);
				if (idepN != result->nodes.end())
				{
					insert(node->dep_n, idepN->first, idepN->second);
				}
			}
		}
	}

	return result;
}

static void ExpandDeps(UdtNodePtr node, UdtGraphPtr input, UdtGraphPtr result)
{
	std::vector<UdtNodePtr> deps;
	for (auto& idep : node->dep_n) {
		deps.push_back(idep.second);
	}

	for (;;) {
		if (deps.empty()) break;

		auto dep = deps.back();
		deps.pop_back();

		if (result->nodes.find(dep->name) == result->nodes.end()) {

			result->insert(dep->name, dep);

			for (auto& idep : dep->dep_n) {
				deps.push_back(idep.second);
			}
		}
	}
}

static UdtGraphPtr FilterUdtGraph(UdtGraphPtr input, const std::wstring& filter, BOOL bExpandDeps = FALSE)
{
	UdtGraphPtr result(std::make_shared<UdtGraph>());

	std::wstring filterx(filter);
	replaceAll(filterx, L"\"", L"");
	auto names = split(filterx, L";");

	for (auto& name : names)
	{
		std::wstring namex(name);
		trim(namex);

		const bool exclude = startsWith(namex, L"-");
		if (!exclude) {

			replace(namex, L"-", L"");
			trim(namex);

			auto inode = input->nodes.find(namex);
			if (inode != input->nodes.end() && inode->second) {

				auto node = inode->second;
				if (!result->contains(node->name)) {
					result->insert(node);
				}
				if (bExpandDeps) {
					ExpandDeps(node, input, result);
				}
			}
		}
	}

	// remove excluded nodes
	for (auto& name : names)
	{
		std::wstring namex(name);
		trim(namex);

		const bool exclude = startsWith(namex, L"-");
		if (exclude) {

			replace(namex, L"-", L"");
			trim(namex);

			auto inode = result->nodes.find(namex);
			if (inode != result->nodes.end()) {
				result->nodes.erase(inode);
			}
		}
	}

	return result;
}

//
// DEP RESOLVER
//

static bool Depends(const UdtNodePtr& a, const UdtNodePtr& b)
{
	if (a->dep_s.find(b->name) != a->dep_s.end()) return true;

	std::vector<UdtNodePtr> deps;
	for (auto& idep : a->dep_n) {
		deps.push_back(idep.second);
	}

	for (;;) {
		if (deps.empty()) break;

		auto dep = deps.back();
		deps.pop_back();

		if (dep->dep_s.find(b->name) != dep->dep_s.end()) return true;

		for (auto& idep : dep->dep_n) {
			deps.push_back(idep.second);
		}
	}

	return false;
}

static ResolvedUdtGraphPtr ResolveDeps(UdtGraphPtr input)
{
	ResolvedUdtGraphPtr result(std::make_shared<ResolvedUdtGraph>());

	std::list<UdtNodePtr> nodes;
	{
		std::vector<UdtNodePtr> nodeV;
		for (auto& iter : input->nodes) {
			nodeV.push_back(iter.second);
		}
		struct {
			inline bool operator()(const UdtNodePtr& a, const UdtNodePtr& b) const {
				return (a->dep_s.size() < b->dep_s.size());
			}
		} comparator;
		std::sort(nodeV.begin(), nodeV.end(), comparator);

		for (auto& iter : nodeV) {
			nodes.push_back(iter);
		}
	}

	std::list<UdtNodePtr> resolved;
	for (;;) {
		if (nodes.empty()) break;

		resolved.clear();
		for (auto& node : nodes) {

			bool haveDeps = false;

			for (auto& inner : nodes) {
				if (node != inner) {
					if (Depends(node, inner)) {
						haveDeps = true;
						break;
					}
				}
			}

			if (!haveDeps) {
				resolved.push_back(node);
			}
		}

		for (auto& node : resolved) {
			result->nodes.push_back(node);
			nodes.remove(node);
		}
	}

	#if defined(_DEBUG)
	for (auto& iter : result->nodes) {
		result->names.push_back(iter->name);
	}
	#endif

	return result;
}

static ResolvedUdtGraphPtr SortBySymId(UdtGraphPtr input)
{
	ResolvedUdtGraphPtr result(std::make_shared<ResolvedUdtGraph>());

	for (auto& iter : input->nodes) {
		result->nodes.push_back(iter.second);
	}

	struct {
		inline bool operator()(const UdtNodePtr& a, const UdtNodePtr& b) const {
			return (a->id < b->id);
		}
	} comparator;

	std::sort(result->nodes.begin(), result->nodes.end(), comparator);

	#if defined(_DEBUG)
	for (auto& iter : result->nodes) {
		result->names.push_back(iter->name);
	}
	#endif

	return result;
}
