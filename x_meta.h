#pragma once

static std::wstring GetUniqFunctionName(IDiaSymbol *pFunc, BOOL bWithArgs = TRUE)
{
	std::wstring result;

	Bstr name;
	pFunc->get_name(&name);
	result.assign(*name);

	if (bWithArgs)
	{
		result.append(L"(");
		PrintFunctionArgsX(pFunc, TRUE, FALSE, NULL, &result);
		result.append(L")");
	}

	return result;
}

static IDiaSymbol* FindIntroVirtual(IDiaSymbol* pObj, const std::wstring& funcName, DWORD* pBaseOffset, BOOL bWithArgs = TRUE)
{
	ComRef<IDiaEnumSymbols> enumerator;
	ComRef<IDiaSymbol> sym;

	if (SUCCEEDED(pObj->findChildren(SymTagFunction, NULL, nsNone, &enumerator)))
	{
		ULONG celt = 0;
		while (SUCCEEDED(enumerator->Next(1, &sym, &celt)) && (celt == 1))
		{
			auto name = GetUniqFunctionName(*sym, bWithArgs);

			if (
				(wcscmp(funcName.c_str(), name.c_str()) == 0)
				|| ((funcName)[0] == L'~' && (name)[0] == L'~'))
			{
				BOOL isVirtual = FALSE;
				sym->get_virtual(&isVirtual);

				BOOL isIntro = FALSE;
				sym->get_intro(&isIntro);

				if (isVirtual && isIntro)
				{
					IDiaSymbol* res = *sym;
					sym._ptr = NULL;
					return res;
				}
			}
		}
	}

	if (SUCCEEDED(pObj->findChildren(SymTagBaseClass, NULL, nsNone, &enumerator)))
	{
		ULONG celt = 0;
		while (SUCCEEDED(enumerator->Next(1, &sym, &celt)) && (celt == 1))
		{
			IDiaSymbol* res = FindIntroVirtual(*sym, funcName, pBaseOffset, bWithArgs);
			if (res)
			{
				LONG offset;
				if (sym->get_offset(&offset) == S_OK) {
					*pBaseOffset += offset;
				}

				return res;
			}
		}
	}

	return NULL;
}

static BOOL GetVirtualFuncInfo(IDiaSymbol* pThis, IDiaSymbol* pFunc, DWORD& vtpo, DWORD& vfid)
{
	BOOL res = FALSE;

	vtpo = 0; // virtual table pointer offset
	vfid = 0; // virtual function id in VT

	BOOL isVirtual = FALSE;
	pFunc->get_virtual(&isVirtual);

	if (isVirtual)
	{
		DWORD off = 0;
		res = (S_OK == pFunc->get_virtualBaseOffset(&off));

		BOOL isIntro = FALSE;
		pFunc->get_intro(&isIntro);

		if (off == 0 && !isIntro)
		{
			Bstr udtName;
			pThis->get_name(&udtName);

			std::wstring udtPrefix(*udtName);
			udtPrefix.append(L"::");

			Bstr symName;
			pFunc->get_name(&symName);

			auto funcName = GetUniqFunctionName(pFunc);

			// HACK: on win10 have to remove UDT name prefix
			removePrefix(funcName, udtPrefix);

			ComRef<IDiaSymbol> intro(FindIntroVirtual(pThis, funcName, &vtpo));
			if (!(*intro))
			{
				// HACK: find by function by name without args
				funcName = *symName;
				removePrefix(funcName, udtPrefix);
				intro = FindIntroVirtual(pThis, funcName, &vtpo, FALSE);
			}

			if (*intro)
			{
				res = (S_OK == intro->get_virtualBaseOffset(&off));
			}
			else
			{
				res = FALSE;
			}
		}

		vfid = off / sizeof(void*);
	}

	return res;
}

static void PrintMetaSym(IDiaSymbol *pSymbol, std::unordered_set<DWORD>& uniq, int depth = 0)
{
	// sym

	DWORD symId = 0;
	pSymbol->get_symIndexId(&symId);

	if (uniq.find(symId) != uniq.end()) return;
	uniq.insert(symId);

	DWORD symTag = 0;
	pSymbol->get_symTag(&symTag);

	Bstr symName;
	pSymbol->get_name(&symName);

	// type

	DWORD typeId = 0;
	DWORD typeTag = 0;
	Bstr typeName;

	ComRef<IDiaSymbol> type;
	if (pSymbol->get_type(&type) == S_OK)
	{
		type->get_symIndexId(&typeId);
		type->get_symTag(&typeTag);
		type->get_name(&typeName);
	}

	// print

	for (int i = 0; i < depth; ++i) putwchar(L' ');
	wprintf(L"//SYM: %u %s \"%s\" # Type: %u %s \"%s\"\n", 
		(unsigned int)symId, rgTags[symTag], *symName, 
		(unsigned int)typeId, rgTags[typeTag], *typeName
	);

	if (typeTag == SymTagPointerType)
	{
		ComRef<IDiaSymbol> ptrType;
		if (type->get_type(&ptrType) == S_OK)
		{
			DWORD ptrId = 0;
			ptrType->get_symIndexId(&ptrId);

			DWORD ptrTag = 0;
			ptrType->get_symTag(&ptrTag);

			Bstr ptrName;
			ptrType->get_name(&ptrName);

			for (int i = 0; i < depth; ++i) putwchar(L' ');
			wprintf(L" //PTR: %u %s \"%s\"\n", (unsigned int)ptrId, rgTags[ptrTag], *ptrName);
		}
	}

	// children

	#if 0
	for (int i = 0; i < depth; ++i) putwchar(L' ');
	wprintf(L" //C\n");
	#endif

	SymbolEnumerator iter;
	if (iter.Find(pSymbol, SymTagNull, NULL)) {
		while (iter.Next()) {
			PrintMetaSym(*iter, uniq, depth + 1);
		}
	}

	// type children

	#if 0
	for (int i = 0; i < depth; ++i) putwchar(L' ');
	wprintf(L" //T\n");
	#endif

	if (*type)
	{
		if (iter.Find(*type, SymTagNull, NULL)) {
			while (iter.Next()) {
				PrintMetaSym(*iter, uniq, depth + 1);
			}
		}
	}

	if (depth == 0)
	{
		wprintf(L"\n");
	}
}

static void PrintMetaBaseClass(Bstr& udtName, IDiaSymbol *pSymbol)
{
	// https://github.com/MicrosoftDocs/visualstudio-docs/blob/master/docs/debugger/debug-interface-access/baseclass.md

	DWORD baseKind = 0;
	pSymbol->get_udtKind(&baseKind);
	wprintf(L"%s ", rgUdtKind[baseKind]);

	PrintName(pSymbol);

	BOOL flag;
	DWORD dispIndex;
	LONG ptrOffset;
	ComRef<IDiaSymbol> vbTableType;

	if ((pSymbol->get_virtualBaseClass(&flag) == S_OK) && flag) {
		if ((pSymbol->get_virtualBaseDispIndex(&dispIndex) == S_OK) &&
			(pSymbol->get_virtualBasePointerOffset(&ptrOffset) == S_OK)) {

			wprintf(L" @vbc @vbdi=0x%X @vbpo=%ld @vbtt=", dispIndex, ptrOffset);
			if (pSymbol->get_virtualBaseTableType(&vbTableType) == S_OK) {
				PrintTypeX(*vbTableType);
			}
			else {
				wprintf(L"?");
			}
		}
	}
	else {
		LONG offset;
		if (pSymbol->get_offset(&offset) == S_OK) {
			wprintf(L" @off=%u", (unsigned int)offset);
		}
	}

	ULONGLONG len;
	if (pSymbol->get_length(&len) == S_OK) {
		wprintf(L" @len=%u", (unsigned int)len);
	}

	putwchar(L'\n');
}

static void PrintMetaField(Bstr& udtName, IDiaSymbol *pSymbol)
{
	PrintLocation(pSymbol);

	DWORD dwDataKind;
	pSymbol->get_dataKind(&dwDataKind);

	wprintf(L", %s", rgDataKind[dwDataKind]);
	PrintSymbolType(pSymbol);

	wprintf(L", ");
	PrintName(pSymbol);

	putwchar(L'\n');
}

static void PrintMetaFunction(Bstr& udtName, IDiaSymbol* pUDT, IDiaSymbol *pSymbol)
{
	// https://github.com/MicrosoftDocs/visualstudio-docs/blob/master/docs/debugger/debug-interface-access/function-debug-interface-access-sdk.md

	Bstr name;
	pSymbol->get_name(&name);

	BOOL isStatic = FALSE;
	pSymbol->get_isStatic(&isStatic);

	BOOL isVirtual = FALSE;
	pSymbol->get_virtual(&isVirtual);

	BOOL isPure = FALSE;
	pSymbol->get_pure(&isPure);

	BOOL isIntro = FALSE;
	pSymbol->get_intro(&isIntro);

	DWORD access = 0;
	pSymbol->get_access(&access);

	DWORD callConv = 0;
	pSymbol->get_callingConvention(&callConv);

	ULONGLONG len = 0;
	pSymbol->get_length(&len);

	DWORD dwLocType = 0;
	DWORD dwRVA = 0, dwSect = 0, dwOff = 0;
	if (pSymbol->get_locationType(&dwLocType) == S_OK) {
		if ((pSymbol->get_relativeVirtualAddress(&dwRVA) == S_OK) &&
			(pSymbol->get_addressSection(&dwSect) == S_OK) &&
			(pSymbol->get_addressOffset(&dwOff) == S_OK)) {
		}
	}

	DWORD vtpo = 0; // virtual table pointer offset
	DWORD vfid = 0; // virtual function id in VT
	if (isVirtual) {
		GetVirtualFuncInfo(pUDT, pSymbol, vtpo, vfid);
	}

	ComRef<IDiaSymbol> funcType;
	pSymbol->get_type(&funcType);

	ComRef<IDiaSymbol> returnType;
	funcType->get_type(&returnType);

	wprintf(L"%s ", rgAccess[access]);
	PrintTypeX(*returnType);
	wprintf(L" %s(", *name);
	PrintFunctionArgsX(pSymbol, TRUE, TRUE);
	wprintf(L");");

	if (isIntro) {
		wprintf(L" @intro");
	}
	if (isPure) {
		wprintf(L" @pure");
	}
	if (isVirtual) {
		wprintf(L" @virtual vtpo=%u vfid=%u", (unsigned int)vtpo, (unsigned int)vfid);
	}

	wprintf(L" @loc=%s", (dwLocType > 0 ? rgLocationTypeString[dwLocType] : L"optimized"));

	wprintf(L" @len=%u @rva=%u", (unsigned int)len, (unsigned int)dwRVA);

	//std::wstring uniq = GetUniqFunctionName(pSymbol);
	//wprintf(L" @uniq \"%s\"", uniq.c_str());

	putwchar(L'\n');
}

static void PrintMetaUDT(IDiaSymbol *pUDT)
{
	// https://github.com/MicrosoftDocs/visualstudio-docs/blob/master/docs/debugger/debug-interface-access/udt.md

	DWORD symTag;
	if (pUDT->get_symTag(&symTag) != S_OK) return;

	if (symTag != SymTagUDT)
	{
		DWORD symId;
		pUDT->get_symIndexId(&symId);

		Bstr name;
		pUDT->get_name(&name);

		wprintf(L"//Tag: %u %s \"%s\"\n", (unsigned int)symId, rgTags[symTag], *name);

		ComRef<IDiaSymbol> type;
		if (pUDT->get_type(&type) == S_OK)
		{
			DWORD typeTag;
			type->get_symTag(&typeTag);
			type->get_symIndexId(&symId);
			type->get_name(&name);

			wprintf(L"\t//type %u %s \"%s\"\n", (unsigned int)symId, rgTags[typeTag], *name);
		}

		return;
	}

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

	wprintf(L"//UDT: ");
	wprintf(L"%s", rgUdtKind[kind]);
	wprintf(L" %s", *name);

	ULONGLONG len;
	if (pUDT->get_length(&len) == S_OK) {
		wprintf(L" @len=%u", (unsigned int)len);
	}

	BOOL aligned = FALSE;
	pUDT->get_isDataAligned(&aligned);
	if (aligned) {
		wprintf(L" @aligned");
	}

	ComRef<IDiaEnumSymbols> enumerator;
	ComRef<IDiaSymbol> symbol;
	DWORD baseCount = 0;
	if (SUCCEEDED(pUDT->findChildren(SymTagBaseClass, NULL, nsNone, &enumerator)))
	{
		ULONG celt = 0;
		while (SUCCEEDED(enumerator->Next(1, &symbol, &celt)) && (celt == 1)) { baseCount++; }
	}
	if (baseCount > 1)
	{
		wprintf(L" @multibase=%u", (unsigned int)baseCount);
	}
	else
	{
		ComRef<IDiaSymbol> vtShape;
		if (pUDT->get_virtualTableShape(&vtShape) == S_OK)
		{
			DWORD vfCount = 0;
			vtShape->get_count(&vfCount);
			if (vfCount) {
				wprintf(L" @vfcount=%u", (unsigned int)vfCount);
			}
		}
	}

	putwchar(L'\n');

	// print tags
	DWORD dataOff = 0;
	if (SUCCEEDED(pUDT->findChildren(SymTagNull, NULL, nsNone, &enumerator))) {
		ULONG celt = 0;
		while (SUCCEEDED(enumerator->Next(1, &symbol, &celt)) && (celt == 1)) {

			DWORD tag;
			symbol->get_symTag(&tag);
			switch (tag)
			{
				case SymTagBaseClass:
				{
					LONG baseOff = 0;
					ULONGLONG baseLen = 0;
					if (symbol->get_offset(&baseOff) == S_OK) {
						if (symbol->get_length(&baseLen) == S_OK) {
							DWORD val = (DWORD)(baseOff + baseLen);
							if (dataOff < val) {
								dataOff = val;
							}
						}
					}
					wprintf(L"\t//_Base: ");
					PrintMetaBaseClass(name, *symbol);
					break;
				}

				case SymTagVTable:
				{
					// https://github.com/MicrosoftDocs/visualstudio-docs/blob/master/docs/debugger/debug-interface-access/vtable.md
					wprintf(L"\t//_VTable: ");
					putwchar(L'\n');
					break;
				}

				case SymTagFunction:
				{
					wprintf(L"\t//_Func: ");
					PrintMetaFunction(name, pUDT, *symbol);
					break;
				}

				case SymTagData:
				{
					wprintf(L"\t//_Data: ");
					PrintMetaField(name, *symbol);
					break;
				}

				default:
				{
					wprintf(L"\t//_Tag %u\n", (unsigned int)tag);
					break;
				}
			}
		}
	}

	wprintf(L"//UDT;\n\n");
}
