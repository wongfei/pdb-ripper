#pragma once

static bool IsCompilerNamespace(const wchar_t* name)
{
	bool res = 
		startsWith(name, L"std::") ||
		startsWith(name, L"boost::") ||
		startsWith(name, L"Concurrency::") ||
		startsWith(name, L"DirectX::")
	;
	return res;
}

static bool IsCompilerPrefix(const wchar_t* name)
{
	bool res = 
		startsWith(name, L"_") ||
		startsWith(name, L"$") ||
		startsWith(name, L"_std") ||
		startsWith(name, L"_vc_") ||
		startsWith(name, L"_crt") ||
		startsWith(name, L"_vcrt") ||
		startsWith(name, L"_RTTI")
	;
	return res;
}

static bool IsAllowedName(const wchar_t* name)
{
	bool bad =
		IsCompilerNamespace(name)
		|| IsCompilerPrefix(name)
		|| startsWith(name, L"DXGI")
		|| startsWith(name, L"IDXGI")
		|| startsWith(name, L"D2D1")
		|| startsWith(name, L"D3D1")
		|| startsWith(name, L"D3DX")
		|| startsWith(name, L"ID3D")
		|| startsWith(name, L"CD3D")
		|| startsWith(name, L"D3D_")
		|| startsWith(name, L"IDirectInput")
		|| startsWith(name, L"IDWrite")
		|| startsWith(name, L"DWRITE")
		|| startsWith(name, L"FMOD")
		|| wcsstr(name, L"unnamed-tag")
		|| wcsstr(name, L"unnamed-type")
		|| wcsstr(name, L"unnamed-enum")
		|| wcsstr(name, L"lambda_")
	;
	return !bad;
}

static bool IsTemplateClass(const wchar_t* name)
{
	return wcsstr(name, L"<") ? true : false;
}

inline std::wstring fixEnumName(const std::wstring& name)
{
	std::wstring fixed(name);
	replaceAll(fixed, L"::", L"_");
	return fixed;
}

inline std::wstring fixName(const std::wstring& name)
{
	// TODO: THIS IS SPARTA!!!
	std::wstring fixed(name);
	replaceAll(fixed, L"std::", L"stdXX");
	replaceAll(fixed, L"Concurrency::", L"ConcurrencyXX");
	replaceAll(fixed, L"::", L"_");
	replaceAll(fixed, L"stdXX", L"std::");
	replaceAll(fixed, L"ConcurrencyXX", L"Concurrency::");
	return fixed;
}
