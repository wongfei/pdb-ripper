#pragma once

// forward decl
static void PrintTypeX(IDiaSymbol *pSymbol, std::wstring* dst = nullptr);

static void wprintfX(std::wstring* dst, const wchar_t* format, ...)
{
	wchar_t buf[1024] = { 0 };
	va_list args;
	va_start(args, format);
	const int count = _vsnwprintf_s(buf, _countof(buf) - 1, _TRUNCATE, format, args);
	va_end(args);

	if (count > 0)
	{
		if (dst) dst->append(buf);
		else wprintf(L"%s", buf);
	}
}

static void PrintVariantX(VARIANT var, std::wstring* dst = nullptr)
{
	switch (var.vt) {
		case VT_UI1:
		case VT_I1:
			wprintfX(dst, L" 0x%X", var.bVal);
			break;

		case VT_I2:
		case VT_UI2:
		case VT_BOOL:
			wprintfX(dst, L" 0x%X", var.iVal);
			break;

		case VT_I4:
		case VT_UI4:
		case VT_INT:
		case VT_UINT:
		case VT_ERROR:
			wprintfX(dst, L" 0x%X", var.lVal);
			break;

		case VT_R4:
			wprintfX(dst, L" %g", var.fltVal);
			break;

		case VT_R8:
			wprintfX(dst, L" %g", var.dblVal);
			break;

		case VT_BSTR:
			wprintfX(dst, L" \"%s\"", var.bstrVal);
			break;

		default:
			wprintfX(dst, L" ??");
	}
}

static void PrintNameX(IDiaSymbol *pSymbol, std::wstring* dst = nullptr)
{
	BSTR bstrName;
	BSTR bstrUndName;

	if (pSymbol->get_name(&bstrName) != S_OK) {
		wprintfX(dst, L"(none)");
		return;
	}

	if (pSymbol->get_undecoratedName(&bstrUndName) == S_OK) {
		if (wcscmp(bstrName, bstrUndName) == 0) {
			wprintfX(dst, L"%s", bstrName);
		}
		else {
			wprintfX(dst, L"%s(%s)", bstrUndName, bstrName);
		}
		SysFreeString(bstrUndName);
	}
	else {
		wprintfX(dst, L"%s", bstrName);
	}

	SysFreeString(bstrName);
}

static void PrintBaseTypeX(IDiaSymbol *pSymbol, std::wstring* dst = nullptr)
{
	DWORD dwInfo;
	if (pSymbol->get_baseType(&dwInfo) != S_OK) return;

	ULONGLONG ulLen = 0;
	pSymbol->get_length(&ulLen);

	switch (dwInfo) {
		case btUInt:
			wprintfX(dst, L"unsigned ");
			// fall through

		case btInt:
			switch (ulLen) {
				case 1:
					if (dwInfo == btInt) {
						wprintfX(dst, L"signed ");
					}
					wprintfX(dst, L"char");
					break;

				case 2:
					wprintfX(dst, L"short");
					break;

				case 4:
					wprintfX(dst, L"int");
					break;

				case 8:
					wprintfX(dst, L"__int64");
					break;
			}
			dwInfo = 0xFFFFFFFF;
			break;

		case btFloat:
			switch (ulLen) {
				case 4:
					wprintfX(dst, L"float");
					break;
				case 8:
					wprintfX(dst, L"double");
					break;
			}
			dwInfo = 0xFFFFFFFF;
			break;
	}

	if (dwInfo != 0xFFFFFFFF) {
		wprintfX(dst, L"%s", rgBaseType[dwInfo]);
	}
}

static void PrintLocationX(IDiaSymbol *pSymbol, std::wstring* dst = nullptr)
{
	DWORD dwLocType;
	DWORD dwRVA, dwSect, dwOff, dwReg, dwBitPos, dwSlot;
	LONG lOffset;
	ULONGLONG ulLen;
	VARIANT vt = { VT_EMPTY };

	if (pSymbol->get_locationType(&dwLocType) != S_OK) {
		wprintfX(dst, L"optmized");
		return;
	}

	switch (dwLocType) {
		case LocIsStatic:
			if ((pSymbol->get_relativeVirtualAddress(&dwRVA) == S_OK) &&
				(pSymbol->get_addressSection(&dwSect) == S_OK) &&
				(pSymbol->get_addressOffset(&dwOff) == S_OK)) {
				wprintfX(dst, L"%s, [%08X][%04X:%08X]", (rgLocationTypeString, dwLocType), dwRVA, dwSect, dwOff);
			}
			break;

		case LocIsTLS:
		case LocInMetaData:
		case LocIsIlRel:
			if ((pSymbol->get_relativeVirtualAddress(&dwRVA) == S_OK) &&
				(pSymbol->get_addressSection(&dwSect) == S_OK) &&
				(pSymbol->get_addressOffset(&dwOff) == S_OK)) {
				wprintfX(dst, L"%s, [%08X][%04X:%08X]", (rgLocationTypeString, dwLocType), dwRVA, dwSect, dwOff);
			}
			break;

		case LocIsRegRel:
			if ((pSymbol->get_registerId(&dwReg) == S_OK) &&
				(pSymbol->get_offset(&lOffset) == S_OK)) {
				wprintfX(dst, L"%s Relative, [%08X]", SzNameC7Reg((USHORT)dwReg), lOffset);
			}
			break;

		case LocIsThisRel:
			if (pSymbol->get_offset(&lOffset) == S_OK) {
				wprintfX(dst, L"this+0x%X", lOffset);
			}
			break;

		case LocIsBitField:
			if ((pSymbol->get_offset(&lOffset) == S_OK) &&
				(pSymbol->get_bitPosition(&dwBitPos) == S_OK) &&
				(pSymbol->get_length(&ulLen) == S_OK)) {
				wprintfX(dst, L"this(bf)+0x%X:0x%X len(0x%X)", lOffset, dwBitPos, (ULONG)ulLen);
			}
			break;

		case LocIsEnregistered:
			if (pSymbol->get_registerId(&dwReg) == S_OK) {
				wprintfX(dst, L"enregistered %s", SzNameC7Reg((USHORT)dwReg));
			}
			break;

		case LocIsSlot:
			if (pSymbol->get_slot(&dwSlot) == S_OK) {
				wprintfX(dst, L"%s, [%08X]", (rgLocationTypeString, dwLocType), dwSlot);
			}
			break;

		case LocIsConstant:
			wprintfX(dst, L"constant");

			if (pSymbol->get_value(&vt) == S_OK) {
				PrintVariantX(vt, dst);
				VariantClear((VARIANTARG *)&vt);
			}
			break;

		case LocIsNull:
			break;

		default:
			wprintfX(dst, L"Error - invalid location type: 0x%X", dwLocType);
			break;
	}
}

static void PrintPointerTypeX(IDiaSymbol *pSymbol, std::wstring* dst = nullptr)
{
	ComRef<IDiaSymbol> pBaseType;
	if (pSymbol->get_type(&pBaseType) != S_OK) return;

	Bstr name;
	pSymbol->get_name(&name);

	BOOL isRef = FALSE;
	pSymbol->get_reference(&isRef);

	BOOL isConst = FALSE;
	pSymbol->get_constType(&isConst);

	DWORD baseTypeTag = 0;
	pBaseType->get_symTag(&baseTypeTag);

	BOOL isBaseConst = FALSE;
	pBaseType->get_constType(&isBaseConst);

	#if 0
	if (baseTypeTag == SymTagUDT && !isRef)
	{
		DWORD kind = 0;
		pBaseType->get_udtKind(&kind);
		wprintfX(dst, L"%s ", rgUdtKind[kind]);
	}
	#endif

	if (isBaseConst) {
		wprintfX(dst, L"const ");
	}

	if (baseTypeTag == SymTagFunctionType)
	{
		wprintfX(dst, L"void");
	}
	else
	{
		PrintTypeX(*pBaseType, dst);
	}

	if (isRef) {
		wprintfX(dst, L" &");
	}
	else {
		wprintfX(dst, L" *");
	}

	#if 0
	BOOL bSet;
	if ((pSymbol->get_constType(&bSet) == S_OK) && bSet) {
		wprintfX(dst, L" const");
	}

	if ((pSymbol->get_volatileType(&bSet) == S_OK) && bSet) {
		wprintfX(dst, L" volatile");
	}

	if ((pSymbol->get_unalignedType(&bSet) == S_OK) && bSet) {
		wprintfX(dst, L" __unaligned");
	}
	#endif
}

static void PrintBoundX(IDiaSymbol *pSymbol, std::wstring* dst = nullptr)
{
	DWORD dwTag = 0;
	DWORD dwKind;

	if (pSymbol->get_symTag(&dwTag) != S_OK) {
		wprintfX(dst, L"ERROR - PrintBound() get_symTag");
		return;
	}

	if (pSymbol->get_locationType(&dwKind) != S_OK) {
		wprintfX(dst, L"ERROR - PrintBound() get_locationType");
		return;
	}

	if (dwTag == SymTagData && dwKind == LocIsConstant) {
		VARIANT v = { VT_EMPTY };
		if (pSymbol->get_value(&v) == S_OK) {
			PrintVariantX(v, dst);
			VariantClear((VARIANTARG *)&v);
		}
	}
	else {
		PrintNameX(pSymbol, dst);
	}
}

static void PrintArraySizeX(IDiaSymbol *pSymbol, std::wstring* dst = nullptr)
{
	DWORD symTag;
	pSymbol->get_symTag(&symTag);
	if (symTag != SymTagArrayType) {
		return;
	}

	ComRef<IDiaSymbol> baseType;
	if (pSymbol->get_type(&baseType) != S_OK) {
		return;
	}

	PrintArraySizeX(*baseType, dst);

	SymbolEnumerator child;
	DWORD dwRank;
	LONG count;

	if (pSymbol->get_rank(&dwRank) == S_OK) {
		if (child.Find(pSymbol, SymTagDimension, NULL)) {
			while (child.Next()) {

				wprintfX(dst, L"[");
				ComRef<IDiaSymbol> bound;
				if (child->get_lowerBound(&bound) == S_OK) {
					PrintBoundX(*bound, dst);
					wprintfX(dst, L"..");
				}

				if (child->get_upperBound(&bound) == S_OK) {
					PrintBoundX(*bound, dst);
				}
				wprintfX(dst, L"]");
			}
		}
	}
	else if (child.Find(pSymbol, SymTagCustomType, NULL) && (child._enumerator->get_Count(&count) == S_OK) && (count > 0)) {
		while (child.Next()) {

			wprintfX(dst, L"[");
			PrintTypeX(*child, dst);
			wprintfX(dst, L"]");
		}
	}
	else {
		DWORD dwCountElems = 0;
		ULONGLONG ulLenArray = 0;
		ULONGLONG ulLenElem = 0;

		if (pSymbol->get_count(&dwCountElems) == S_OK) {
			wprintfX(dst, L"[%u]", (unsigned int)dwCountElems);
		}
		else if ((pSymbol->get_length(&ulLenArray) == S_OK) && (baseType->get_length(&ulLenElem) == S_OK)) {
			if (ulLenElem == 0) {
				wprintfX(dst, L"[%u]", (unsigned int)ulLenArray);
			}
			else {
				wprintfX(dst, L"[%u]", (unsigned int)ulLenArray / (unsigned int)ulLenElem);
			}
		}
	}
}

static void PrintCustomTypeX(IDiaSymbol *pSymbol, std::wstring* dst = nullptr)
{
	DWORD idOEM, idOEMSym;
	DWORD cbData = 0;
	DWORD count;

	if (pSymbol->get_oemId(&idOEM) == S_OK) {
		wprintfX(dst, L"OEMId = %X, ", idOEM);
	}

	if (pSymbol->get_oemSymbolId(&idOEMSym) == S_OK) {
		wprintfX(dst, L"SymbolId = %X, ", idOEMSym);
	}

	if (pSymbol->get_types(0, &count, NULL) == S_OK) {
		IDiaSymbol** rgpDiaSymbols = (IDiaSymbol**)_alloca(sizeof(IDiaSymbol *) * count);

		if (pSymbol->get_types(count, &count, rgpDiaSymbols) == S_OK) {
			for (ULONG i = 0; i < count; i++) {

				PrintTypeX(rgpDiaSymbols[i], dst);
				rgpDiaSymbols[i]->Release();
			}
		}
	}

	if ((pSymbol->get_dataBytes(cbData, &cbData, NULL) == S_OK) && (cbData != 0)) {

		wprintfX(dst, L", Data: ");

		BYTE *pbData = new BYTE[cbData];
		pSymbol->get_dataBytes(cbData, &cbData, pbData);

		for (ULONG i = 0; i < cbData; i++) {
			wprintfX(dst, L"0x%02X ", pbData[i]);
		}

		delete[] pbData;
	}
}

enum class EPrintFuncArgs {

};

static void PrintFunctionArgsX(IDiaSymbol *pFunc, BOOL genArgTypes = TRUE, BOOL genArgNames = FALSE, const wchar_t* pthisType = nullptr, std::wstring* dst = nullptr)
{
	if (!genArgTypes && !genArgNames) return;

	int argId = 0;

	if (pthisType) {
		if (genArgTypes) {
			wprintfX(dst, L"%s *pthis", pthisType);
		}
		else {
			wprintfX(dst, L"this");
		}
		argId++;
	}

	int dataCount = 0;
	ComRef<IDiaEnumSymbols> children;
	if (SUCCEEDED(pFunc->findChildren(SymTagData, NULL, nsNone, &children))) {
		ComRef<IDiaSymbol> child;
		ULONG celt = 0;
		while (SUCCEEDED(children->Next(1, &child, &celt)) && (celt == 1)) {

			DWORD argKind = 0;
			child->get_dataKind(&argKind);
			if (argKind == DataIsParam) {

				ComRef<IDiaSymbol> childType;
				if (child->get_type(&childType) == S_OK) {

					if (argId) {
						wprintfX(dst, L", ");
					}
					if (genArgTypes) {
						PrintTypeX(*childType, dst);
					}
					if (genArgNames) {
						if (genArgTypes) {
							wprintfX(dst, L" ");
						}
						Bstr name;
						child->get_name(&name);
						wprintfX(dst, L"%s", *name);
					}
					argId++;
				}
				dataCount++;
			}
		}
	}

	if (!dataCount) {
		ComRef<IDiaSymbol> funcType;
		pFunc->get_type(&funcType);

		if (SUCCEEDED(funcType->findChildren(SymTagFunctionArgType, NULL, nsNone, &children))) {
			ComRef<IDiaSymbol> child;
			ULONG celt = 0;
			while (SUCCEEDED(children->Next(1, &child, &celt)) && (celt == 1)) {

				ComRef<IDiaSymbol> childType;
				if (child->get_type(&childType) == S_OK) {
					if (argId) {
						wprintfX(dst, L", ");
					}
					if (genArgTypes) {
						PrintTypeX(*childType, dst);
					}
					if (genArgNames) {
						if (genArgTypes) {
							wprintfX(dst, L" ");
						}
						wprintfX(dst, L" _arg%d", argId);
					}
					argId++;
				}
			}
		}
	}
}

static void PrintTypeX(IDiaSymbol *pSymbol, std::wstring* dst)
{
	DWORD dwTag;
	if (pSymbol->get_symTag(&dwTag) != S_OK) return;

	#if 0
	if (dwTag != SymTagPointerType)
	{
		BOOL bSet;
		if ((pSymbol->get_constType(&bSet) == S_OK) && bSet) {
			wprintfX(dst, L"const ");
		}
		if ((pSymbol->get_volatileType(&bSet) == S_OK) && bSet) {
			wprintfX(dst, L"volatile ");
		}
		if ((pSymbol->get_unalignedType(&bSet) == S_OK) && bSet) {
			wprintfX(dst, L"__unaligned ");
		}
	}
	#endif

	switch (dwTag)
	{
		case SymTagUDT:
		{
			Bstr symName;
			pSymbol->get_name(&symName);
			std::wstring fixedName(fixName(*symName));

			wprintfX(dst, L"%s", fixedName.c_str());
			break;
		}

		case SymTagEnum:
		{
			Bstr symName;
			pSymbol->get_name(&symName);
			std::wstring fixedName(fixEnumName(*symName));

			wprintfX(dst, L"%s", fixedName.c_str());
			break;
		}

		case SymTagBaseType:
		{
			PrintBaseTypeX(pSymbol, dst);
			break;
		}

		case SymTagPointerType:
		{
			PrintPointerTypeX(pSymbol, dst);
			break;
		}

		case SymTagArrayType:
		{
			ComRef<IDiaSymbol> baseType;
			pSymbol->get_type(&baseType);

			PrintTypeX(*baseType, dst);
			break;
		}

		case SymTagCustomType:
		{
			PrintCustomTypeX(pSymbol, dst);
			break;
		}

		case SymTagTypedef:
		{
			PrintNameX(pSymbol, dst);
			break;
		}

		case SymTagData:
		{
			PrintLocationX(pSymbol, dst);
			break;
		}
	}
}
