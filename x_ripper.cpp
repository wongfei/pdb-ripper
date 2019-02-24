//
// ACHTUNG!!! COMPLETELY BRAINDAMAGED SHITCODE!!!
//

#include "stdafx.h"
#include <assert.h>
#include <malloc.h>

#include <cctype>
#include <memory>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <regex>

#include "Dia2Dump.h"
#include "PrintSymbol.h"

#include "x_str.h"
#include "x_common.h"
#include "x_names.h"
#include "x_print.h"
#include "x_meta.h"
#include "x_udt.h"

// [CONFIG]
#define GEN_DUMMY_CTOR
#define GEN_VFUNC_REDIR
//#define GEN_VFUNC_BODY

#include "x_cpp_enum.h"
#include "x_cpp_proxy.h"
#include "x_cpp_gen_file.h"

void RipPdb(IDiaSymbol *pGlobal, int argc, wchar_t *argv[])
{
	// USAGE: dia2dump.exe -rip [flags] ... <input.pdb>

	BOOL bPrintNamesOnly = FALSE;
	BOOL bPrintCppProxy = FALSE;
	BOOL bGenerateCppFiles = FALSE;
	BOOL bIncludeInternals = FALSE;
	BOOL bIncludeTemplates = FALSE;
	BOOL bSymbols = FALSE;
	BOOL bMeta = FALSE;
	BOOL bGuardObjects = FALSE;
	BOOL bExpandDeps = FALSE;
	BOOL bResolveDeps = FALSE;
	std::wstring filter;

	if (argc > 3) {
		for (int i = 2; i < argc - 1; ++i) {
			if (!wcscmp(argv[i], L"-printNamesOnly")) bPrintNamesOnly = TRUE;
			else if (!wcscmp(argv[i], L"-printCppProxy")) bPrintCppProxy = TRUE;
			else if (!wcscmp(argv[i], L"-genCppFiles")) bGenerateCppFiles = TRUE;
			else if (!wcscmp(argv[i], L"-ii")) bIncludeInternals = TRUE;
			else if (!wcscmp(argv[i], L"-it")) bIncludeTemplates = TRUE;
			else if (!wcscmp(argv[i], L"-s")) bSymbols = TRUE;
			else if (!wcscmp(argv[i], L"-m")) bMeta = TRUE;
			else if (!wcscmp(argv[i], L"-g")) bGuardObjects = TRUE;
			else if (!wcscmp(argv[i], L"-d")) bExpandDeps = TRUE;
			else if (!wcscmp(argv[i], L"-rd")) bResolveDeps = TRUE;
			else if (!wcscmp(argv[i], L"-names") && (i + 1 < argc - 1)) { filter = argv[i + 1]; i++; }
		}
	}

	auto graph = GetUdtGraph(pGlobal);

	UdtGraphPtr filtered;
	if (filter.empty()) {
		filtered = graph;
	}
	else {
		filtered = FilterUdtGraph(graph, filter, bExpandDeps);
	}

	ResolvedUdtGraphPtr resolved;
	if (bResolveDeps) {
		resolved = ResolveDeps(filtered);
	}
	else {
		resolved = SortBySymId(filtered);
	}

	if (bPrintCppProxy) {
		wprintf(L"// ### AUTO-GENERATED ###\n\n");
		CppPrintEnums(pGlobal, resolved);
		CppProxyPrintForwardDecl(pGlobal, resolved, graph);
	}

	if (bGenerateCppFiles) {
		CppGenEnums(pGlobal, resolved);
	}

	for (auto& node : resolved->nodes) {
		if ((bIncludeInternals || IsAllowedName(node->name.c_str())) && (bIncludeTemplates || !IsTemplateClass(node->name.c_str()))) {
			if (bPrintNamesOnly) {
				wprintf(L"%s\n", node->name.c_str());
			}
			else {
				if (bSymbols) {
					std::unordered_set<DWORD> uniq;
					PrintMetaSym(*node->symbol, uniq);
				}
				if (bMeta) {
					PrintMetaUDT(*node->symbol);
				}
				if (bPrintCppProxy) {
					CppProxyPrintUDT(*node->symbol, bGuardObjects);
				}
				if (bGenerateCppFiles) {
					CppGenClass(pGlobal, *node->symbol, node, resolved, graph);
				}
			}
		}
	}

	return;
}
