#pragma once

static void CppPrintEnum(IDiaSymbol *pGlobal, const wchar_t* filter, FILE* fd = stdout)
{
	SymbolEnumerator symbol;
	if (symbol.Find(pGlobal, SymTagEnum, filter)) {
		while (symbol.Next()) {

			Bstr name;
			symbol->get_name(&name);
			if (!IsAllowedName(*name)) return;

			std::wstring nameFixed(fixEnumName(*name));
			fwprintf(fd, L"enum class %s {\n", nameFixed.c_str());

			SymbolEnumerator data;
			if (data.Find(*symbol, SymTagData, NULL)) {
				while (data.Next()) {

					DWORD dwDataKind = 0;
					data->get_dataKind(&dwDataKind);

					if (dwDataKind == DataIsConstant)
					{
						Bstr dataName;
						data->get_name(&dataName);

						fwprintf(fd, L"\t");
						fwprintf(fd, L"%s =", *dataName);

						VARIANT vt = { VT_EMPTY };
						if (data->get_value(&vt) == S_OK) {

							std::wstring valStr;
							PrintVariantX(vt, &valStr);
							fwprintf(fd, L"%s", valStr.c_str());

							VariantClear((VARIANTARG *)&vt);
						}

						fwprintf(fd, L",\n");
					}
				}
			}

			fwprintf(fd, L"};\n");
		}
	}
}

static void CppPrintEnums(IDiaSymbol *global, ResolvedUdtGraphPtr graph, FILE* fd = stdout)
{
	std::unordered_set<std::wstring> uniqEnums;

	for (auto& node : graph->nodes) {
		for (auto& idep : node->dep_s) {
			if (*idep.second) {

				DWORD tag;
				idep.second->get_symTag(&tag);

				if (tag == SymTagEnum) {
					if (uniqEnums.find(idep.first) == uniqEnums.end()) {

						uniqEnums.insert(idep.first);
						CppPrintEnum(global, idep.first.c_str(), fd);
						fwprintf(fd, L"\n");
					}
				}
			}
		}
	}
}
