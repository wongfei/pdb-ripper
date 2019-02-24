#pragma once

static void CppProxyPrintForwardDecl(IDiaSymbol *global, ResolvedUdtGraphPtr resolved, UdtGraphPtr graph)
{
	std::unordered_set<std::wstring> uniq;

	int count = 0;
	for (auto& node : resolved->nodes) {
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

						wprintf(L"%s %s;\n", rgUdtKind[kind], fixedName.c_str());
						++count;
					}
				}
			}
		}
	}
	if (count) {
		wprintf(L"\n");
	}
}

static void CppProxyPrintUDT(IDiaSymbol *pUDT, BOOL bGuardObject = FALSE)
{
	// https://github.com/MicrosoftDocs/visualstudio-docs/blob/master/docs/debugger/debug-interface-access/lexical-hierarchy-of-symbol-types.md
	// https://github.com/MicrosoftDocs/visualstudio-docs/blob/master/docs/debugger/debug-interface-access/class-hierarchy-of-symbol-types.md
	// https://github.com/MicrosoftDocs/visualstudio-docs/blob/master/docs/debugger/debug-interface-access/udt.md

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

	// class <NAME>
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

	wprintf(L"%s %s", rgUdtKind[kind], nameFixed.c_str());

	// base class
	{
		int baseId = 0;
		SymbolEnumerator symbol;
		if (symbol.Find(pUDT, SymTagBaseClass, NULL)) {
			while (symbol.Next()) {

				if (!baseId) wprintf(L" : ");
				else wprintf(L", ");
				wprintf(L"public ");

				Bstr baseName;
				symbol->get_name(&baseName);

				std::wstring baseNameFixed(fixName(*baseName));
				wprintf(L"%s", baseNameFixed.c_str());
				baseId++;
			}
		}
	}

	// body
	wprintf(L" {\n");
	wprintf(L"public:\n");

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

					wprintf(L"\t");
					PrintTypeX(*fieldType);
					wprintf(L" %s", *fieldName);

					if (fieldTypeTag == SymTagArrayType)
					{
						PrintArraySizeX(*fieldType);
					}

					wprintf(L";\n");
				}
			}
		}
	}

	// dummy constructor
	#if defined(GEN_DUMMY_CTOR)
	{
		wprintf(L"\tinline %s() ", nameFixed.c_str());
		int count = 0;
		SymbolEnumerator symbol;
		if (symbol.Find(pUDT, SymTagData, NULL)) {
			while (symbol.Next()) {

				DWORD dwDataKind;
				symbol->get_dataKind(&dwDataKind);

				if (dwDataKind == DataIsMember)
				{
					ComRef<IDiaSymbol> fieldType;
					symbol->get_type(&fieldType);

					BOOL isRef = FALSE;
					fieldType->get_reference(&isRef);

					if (isRef) {

						if (!count) wprintf(L" : ");
						else wprintf(L", ");

						Bstr fieldName;
						symbol->get_name(&fieldName);
						wprintf(L"%s(*((", *fieldName);

						ComRef<IDiaSymbol> baseType;
						fieldType->get_type(&baseType);
						Bstr baseName;
						baseType->get_name(&baseName);

						PrintTypeX(*baseType);
						wprintf(L"*)NULL))");

						++count;
					}
				}
			}
			wprintf(L" { }\n");
		}
	}
	#endif

	// stubs
	{
		SymbolEnumerator symbol;
		if (symbol.Find(pUDT, SymTagFunction, NULL)) {
			while (symbol.Next()) {

				DWORD funcId;
				symbol->get_symIndexId(&funcId);

				Bstr funcName;
				symbol->get_name(&funcName);
				if (wcsstr(*funcName, L"__vecDelDtor")) continue;

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
				if (isOptimized && !isVirtual) continue;

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

				// virtual funcs to fill vtable
				if (isVirtual) {
					if (isDtor) {
						wprintf(L"\tvirtual ~%s()", nameFixed.c_str());
					}
					else {
						wprintf(L"\tvirtual ");
						PrintTypeX(*returnType);
						wprintf(L" ");
						if (callConv > 0) {
							wprintf(L"%s ", rgCallConv[callConv]);
						}
						wprintf(L"%s_vf%u(", *funcName, (unsigned int)vfid);
						PrintFunctionArgsX(*symbol, TRUE, TRUE);
						wprintf(L")");
					}
					if (isPure) {
						wprintf(L" = 0;");
					}
					else {
						#if defined(GEN_VFUNC_BODY)
						wprintf(L" { ");
						if (!isOptimized) {
							if (isDtor) {
								wprintf(L"dtor();");
							}
							else {
								//wprintf(L"return %s_impl(", *funcName);
								//PrintFunctionArgsX(*symbol, FALSE, TRUE);
								//wprintf(L");");
								wprintf(L"typedef ");
								PrintTypeX(*returnType);
								wprintf(L" (");
								if (callConv > 0) {
									wprintf(L"%s ", rgCallConv[callConv]);
								}
								wprintf(L"*_fpt)(");
								PrintFunctionArgsX(*symbol, TRUE, FALSE, nameFixed.c_str());
								wprintf(L");");
								wprintf(L" _fpt _f=(_fpt)_drva(%u);", (unsigned int)dwRVA);
								wprintf(L" return _f(");
								PrintFunctionArgsX(*symbol, FALSE, TRUE, nameFixed.c_str());
								wprintf(L");");
							}
						}
						wprintf(L" }");
						#else
						wprintf(L";");
						#endif
					}
					wprintf(L"\n");
				}

				// inline rva calls
				if (!isOptimized && !isPure) {

					wprintf(L"\tinline ");
					if (isDtor) {
						wprintf(L"void dtor");
					}
					else if (isCtor) {
						wprintf(L"void ctor");
					}
					else {
						PrintTypeX(*returnType);
						wprintf(L" ");

						if (callConv > 0) {
							wprintf(L"%s ", rgCallConv[callConv]); // not __cdecl
						}

						if (isVirtual) {
							wprintf(L"%s_impl", *funcName);
						}
						else {
							wprintf(L"%s", *funcName);
						}
					}
					wprintf(L"(");
					PrintFunctionArgsX(*symbol, TRUE, TRUE);
					wprintf(L")");
					wprintf(L" { ");
					wprintf(L"typedef ");
					PrintTypeX(*returnType);
					wprintf(L" (");
					if (callConv > 0) {
						wprintf(L"%s ", rgCallConv[callConv]);
					}
					wprintf(L"*_fpt)(");
					PrintFunctionArgsX(*symbol, TRUE, FALSE, nameFixed.c_str());
					wprintf(L");");
					//wprintf(L" _fpt _fp=(_fpt)(((uint8_t*)_g_module)+%u);", (unsigned int)dwRVA);
					wprintf(L" _fpt _f=(_fpt)_drva(%u);", (unsigned int)dwRVA);
					if (isDtor) {
						wprintf(L" _f(this);");
					}
					else {
						if (isCtor) {
							wprintf(L" _f(");
						}
						else {
							wprintf(L" return _f(");
						}
						PrintFunctionArgsX(*symbol, FALSE, TRUE, nameFixed.c_str());
						wprintf(L");");
					}
					wprintf(L" }");
					wprintf(L"\n");
				}

				// virtual redirectors
				#if defined(GEN_VFUNC_REDIR)
				if (isVirtual && isFunc) {
					wprintf(L"\tinline ");
					PrintTypeX(*returnType);
					wprintf(L" ");
					if (callConv > 0) {
						wprintf(L"%s ", rgCallConv[callConv]);
					}
					wprintf(L"%s(", *funcName);
					PrintFunctionArgsX(*symbol, TRUE, TRUE);
					wprintf(L")");
					wprintf(L" { ");
					wprintf(L"return %s_vf%u(", *funcName, (unsigned int)vfid);
					PrintFunctionArgsX(*symbol, FALSE, TRUE);
					wprintf(L");");
					wprintf(L" }\n");
				}
				#endif
			}
		}
	}

	// guard
	if (bGuardObject)
	{
		ULONGLONG len = 0;
		pUDT->get_length(&len);

		wprintf(L"\tinline void _guard_obj() {\n");
		wprintf(L"\t\tstatic_assert((sizeof(%s)==%u),\"bad size\");\n", nameFixed.c_str(), (unsigned int)len);

		SymbolEnumerator symbol;
		if (symbol.Find(pUDT, SymTagData, NULL)) {
			while (symbol.Next()) {

				DWORD dwDataKind;
				symbol->get_dataKind(&dwDataKind);
				if (dwDataKind == DataIsMember)
				{
					DWORD locType = 0;
					symbol->get_locationType(&locType);
					if (locType == LocIsThisRel)
					{
						LONG off = 0;
						if (symbol->get_offset(&off) == S_OK)
						{
							ComRef<IDiaSymbol> fieldType;
							symbol->get_type(&fieldType);
							BOOL isRef = FALSE;
							fieldType->get_reference(&isRef);

							if (!isRef) {
								Bstr fieldName;
								symbol->get_name(&fieldName);
								wprintf(L"\t\tstatic_assert((offsetof(%s,%s)==0x%X),\"bad off\");\n", nameFixed.c_str(), *fieldName, (unsigned int)off);
							}
						}
					}
				}
			}
		}
		wprintf(L"\t};\n");
	}

	wprintf(L"};\n"); // end UDT
	wprintf(L"\n");
}
