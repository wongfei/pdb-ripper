#pragma once

static void CppGenEnums(IDiaSymbol *global, ResolvedUdtGraphPtr graph)
{
	std::unordered_set<std::wstring> uniqEnums;

	for (auto& node : graph->nodes) {
		for (auto& idep : node->dep_s) {
			if (*idep.second) {

				DWORD tag;
				idep.second->get_symTag(&tag);

				if (tag == SymTagEnum) {

					std::wstring nameFixed(fixEnumName(idep.first));
					std::wstring fileName(nameFixed + L".h");

					if (uniqEnums.find(nameFixed) == uniqEnums.end()) {
						uniqEnums.insert(nameFixed);

						FILE* fd = nullptr;
						_wfopen_s(&fd, fileName.c_str(), L"wt");
						if (fd)
						{
							fwprintf(fd, L"#pragma once\n\n");
							CppPrintEnum(global, idep.first.c_str(), fd);
							fclose(fd);
						}
					}
				}
			}
			else {
				//wprintf(L"%s is null\n", idep.first.c_str());
			}
		}
	}
}

static void CppGenClass(IDiaSymbol *pGlobal, IDiaSymbol *pUDT, UdtNodePtr& node, ResolvedUdtGraphPtr& resolved, UdtGraphPtr& graph)
{
	DWORD symTag;
	if (pUDT->get_symTag(&symTag) != S_OK) return;
	if (symTag != SymTagUDT) return;

	DWORD kind = 0;
	pUDT->get_udtKind(&kind);
	if (!(kind == UdtStruct || kind == UdtClass))
	{
		return;
	}

	Bstr name;
	if (pUDT->get_name(&name) != S_OK) {
		return;
	}

	std::wstring uname(*name);
	std::wstring nameFixed(fixName(uname));
	std::wstring namePrefix;
	std::wstring nameInner;
	{
		size_t pos = uname.find_last_of(L"::");
		if (pos != std::string::npos)
		{
			namePrefix.assign(uname.substr(0, pos - 1));
			nameInner.assign(uname.substr(pos + 1));
		}
		else
		{
			namePrefix.clear();
			nameInner.assign(uname);
		}
	}

	std::wstring fileName(nameFixed + L".h");
	FILE* fd = nullptr;
	_wfopen_s(&fd, fileName.c_str(), L"wt");
	if (!fd) return;

	struct ScopedFile {
		FILE* _fd;
		ScopedFile(FILE* fd) : _fd(fd) {}
		ScopedFile() { if (_fd) { fclose(_fd); } }
	};
	ScopedFile sfd(fd);

	fwprintf(fd, L"#pragma once\n\n");

	// deps
	{
		std::unordered_set<std::wstring> uniq;
		int count = 0;

		for (auto& idep : node->dep_s) {

			if (!endsWith(idep.first, L'*') && IsAllowedName(idep.first.c_str()) && !startsWith(idep.first, L"void")) {

				std::wstring name(idep.first);
				trim(name);

				auto inode = graph->nodes.find(name);
				if (inode != graph->nodes.end()) {

					auto className(fixName(name));

					if (IsTemplateClass(idep.first.c_str()))
					{
						size_t inner = className.find_first_of(L'<');
						auto templName(className.substr(0, inner));

						if (!templName.empty() && uniq.find(templName) == uniq.end()) {
							uniq.insert(templName);

							fwprintf(fd, L"#include \"%s.h\"\n", templName.c_str());
							++count;
						}
					}
					else
					{
						if (!className.empty() && uniq.find(className) == uniq.end()) {
							uniq.insert(className);

							fwprintf(fd, L"#include \"%s.h\"\n", className.c_str());
							++count;
						}
					}
				}
				else {
					auto depSym = FindSymbol(pGlobal, SymTagEnum, name.c_str());
					if (*depSym)
					{
						DWORD depTag = 0;
						depSym->get_symTag(&depTag);
						if (depTag == SymTagEnum)
						{
							auto enumName(fixEnumName(name));

							if (!enumName.empty() && uniq.find(enumName) == uniq.end()) {
								uniq.insert(enumName);
								fwprintf(fd, L"#include \"%s.h\"\n", enumName.c_str());
								++count;
							}
						}
					}
				}
			}
		}
		if (count) {
			fwprintf(fd, L"\n");
		}
	}

	// forward decls
	{
		std::unordered_set<std::wstring> uniq;
		int count = 0;
		for (auto& idep : node->dep_s) {

			if (endsWith(idep.first, L'*') && IsAllowedName(idep.first.c_str()) && !startsWith(idep.first, L"void")) {

				std::wstring name(idep.first);
				replace(name, L"*", L"");
				trim(name);

				auto inode = graph->nodes.find(name);
				if (inode != graph->nodes.end()) {

					auto fixedName(fixName(name));
					if (!fixedName.empty() && uniq.find(fixedName) == uniq.end()) {
						uniq.insert(fixedName);

						DWORD kind;
						inode->second->symbol->get_udtKind(&kind);
						fwprintf(fd, L"%s %s;\n", rgUdtKind[kind], fixedName.c_str());
						++count;
					}
				}
			}
		}
		if (count) {
			fwprintf(fd, L"\n");
		}
	}

	// enums
	{
		#if 0
		for (auto& idep : node->dep_s) {
			if (*idep.second) {

				DWORD tag;
				idep.second->get_symTag(&tag)

					if (tag == SymTagEnum) {
						if (uniqEnums.find(idep.first) == uniqEnums.end()) {

							uniqEnums.insert(idep.first);
							CppPrintEnum(pGlobal, idep.first.c_str(), fd);
						}
					}
			}
		}
		#endif
}

	// class <NAME>
	fwprintf(fd, L"%s %s", rgUdtKind[kind], nameFixed.c_str());

	// base class
	{
		int baseId = 0;
		SymbolEnumerator symbol;
		if (symbol.Find(pUDT, SymTagBaseClass, NULL)) {
			while (symbol.Next()) {

				if (!baseId) fwprintf(fd, L" : ");
				else fwprintf(fd, L", ");
				fwprintf(fd, L"public ");

				Bstr baseName;
				symbol->get_name(&baseName);

				std::wstring baseNameFixed(fixName(*baseName));
				fwprintf(fd, L"%s", baseNameFixed.c_str());
				baseId++;
			}
		}
	}

	// body
	fwprintf(fd, L" {\n");
	fwprintf(fd, L"public:\n");

	// data
	{
		SymbolEnumerator symbol;
		if (symbol.Find(pUDT, SymTagData, NULL)) {
			while (symbol.Next()) {

				DWORD dwDataKind;
				symbol->get_dataKind(&dwDataKind);

				if (dwDataKind == DataIsMember)
				{
					Bstr fieldName;
					symbol->get_name(&fieldName);

					ComRef<IDiaSymbol> fieldType;
					symbol->get_type(&fieldType);

					DWORD fieldTypeTag;
					fieldType->get_symTag(&fieldTypeTag);

					fwprintf(fd, L"\t");

					if (fieldTypeTag == SymTagPointerType)
					{
					}

					std::wstring fieldTypeStr;
					PrintTypeX(*fieldType, &fieldTypeStr);
					fwprintf(fd, L"%s", fieldTypeStr.c_str());

					fwprintf(fd, L" %s", *fieldName);

					if (fieldTypeTag == SymTagArrayType)
					{
						std::wstring arrTypeStr;
						PrintArraySizeX(*fieldType, &arrTypeStr);
						fwprintf(fd, L"%s", arrTypeStr.c_str());
					}

					fwprintf(fd, L";\n");
				}
			}
		}
	}

	// stubs
	{
		int funcLineId = 0;
		SymbolEnumerator symbol;
		if (symbol.Find(pUDT, SymTagFunction, NULL)) {
			while (symbol.Next()) {

				DWORD funcId;
				symbol->get_symIndexId(&funcId);

				Bstr funcName;
				symbol->get_name(&funcName);
				if (wcsstr(*funcName, L"__vecDelDtor")) continue;
				if (wcsstr(*funcName, L"__local_vftable_ctor_closure")) continue;

				BOOL isPure = FALSE;
				symbol->get_pure(&isPure);

				BOOL isVirtual = FALSE;
				symbol->get_virtual(&isVirtual);

				if (isPure && !isVirtual) continue;

				ULONGLONG len = 0;
				DWORD dwLocType = 0, dwRVA = 0, dwSect = 0, dwOff = 0;
				symbol->get_length(&len);
				symbol->get_locationType(&dwLocType);
				symbol->get_relativeVirtualAddress(&dwRVA);
				symbol->get_addressSection(&dwSect);
				symbol->get_addressOffset(&dwOff);

				BOOL isOptimized = (dwLocType == 0);
				//if (isOptimized && !isVirtual) continue;

				DWORD vtpo = 0; // virtual table pointer offset
				DWORD vfid = 0; // virtual function id in VT
				if (isVirtual) {
					GetVirtualFuncInfo(pUDT, *symbol, vtpo, vfid);
				}

				DWORD callConv = 0;
				symbol->get_callingConvention(&callConv);

				ComRef<IDiaSymbol> funcType;
				symbol->get_type(&funcType);

				ComRef<IDiaSymbol> returnType;
				funcType->get_type(&returnType);

				BOOL isDtor = (wcsstr(*funcName, L"~") ? TRUE : FALSE);
				BOOL isCtor = (wcscmp(*funcName, nameInner.c_str()) == 0);
				BOOL isFunc = !(isCtor || isDtor);

				// skip non virtual dtors
				if (!isVirtual && isDtor) continue;

				if (!funcLineId++) {
					fwprintf(fd, L"\n");
				}

				if (!isVirtual) {

					fwprintf(fd, L"\t");
					if (isDtor) {
						//fwprintf(fd, L"~%s", nameFixed.c_str());
					}
					else if (isCtor) {
						fwprintf(fd, L"%s", nameFixed.c_str());
					}
					else {
						std::wstring returnTypeStr;
						PrintTypeX(*returnType, &returnTypeStr);
						fwprintf(fd, L"%s", returnTypeStr.c_str());

						fwprintf(fd, L" ");

						if (callConv > 0) {
							fwprintf(fd, L"%s ", rgCallConv[callConv]); // not __cdecl
						}

						if (isVirtual) {
							fwprintf(fd, L"%s_impl", *funcName);
						}
						else {
							fwprintf(fd, L"%s", *funcName);
						}
					}
					fwprintf(fd, L"(");
					std::wstring funcArgsStr;
					PrintFunctionArgsX(*symbol, TRUE, TRUE, nullptr, &funcArgsStr);
					fwprintf(fd, L"%s", funcArgsStr.c_str());
					fwprintf(fd, L")");

					fwprintf(fd, L" {} ");
					fwprintf(fd, L"\n");
				}

				if (isVirtual) {
					if (isDtor) {
						fwprintf(fd, L"\tvirtual ~%s()", nameFixed.c_str());
					}
					else {
						fwprintf(fd, L"\tvirtual ");

						std::wstring returnTypeStr;
						PrintTypeX(*returnType, &returnTypeStr);
						fwprintf(fd, L"%s", returnTypeStr.c_str());

						fwprintf(fd, L" ");
						if (callConv > 0) {
							fwprintf(fd, L"%s ", rgCallConv[callConv]);
						}
						fwprintf(fd, L"%s(", *funcName);

						std::wstring funcArgsStr;
						PrintFunctionArgsX(*symbol, TRUE, TRUE, nullptr, &funcArgsStr);
						fwprintf(fd, L"%s", funcArgsStr.c_str());

						fwprintf(fd, L")");
					}
					if (isPure) {
						fwprintf(fd, L" = 0;");
					}
					else {
						fwprintf(fd, L" {}");
					}
					fwprintf(fd, L" // vf%u", (unsigned int)vfid);
					fwprintf(fd, L"\n");
				}
			}
		}
	}

	fwprintf(fd, L"};\n"); // end UDT
	fwprintf(fd, L"\n");
}
