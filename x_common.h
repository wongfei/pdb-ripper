#pragma once

static const wchar_t* rgCallConv[] =
{
	L"",			// CV_CALL_NEAR_C (__cdecl)
	L"__fastcall",	// CV_CALL_NEAR_FAST
	L"__stdcall"	// CV_CALL_NEAR_STD
	L"__syscall",	// CV_CALL_NEAR_SYS
	L"__thoscall",	// CV_CALL_THISCALL
	L"__clrcall"	// CV_CALL_CLRCALL
};

class Bstr
{
public:
	BSTR _str;

	inline Bstr() : _str(nullptr) {}
	inline Bstr(BSTR str) : _str(str) {}
	
	inline BSTR* operator &() { Release(); return &_str; }
	inline BSTR operator *() { return _str; }

	inline void Release() { if (_str) { SysFreeString(_str); _str = nullptr; } }
	inline ~Bstr() { Release(); }
};

template<typename T>
class ComRef
{
public:
	T* _ptr;

	inline ComRef() : _ptr(nullptr) {}
	inline ComRef(T* ptr) : _ptr(ptr) {}
	inline ComRef(const ComRef& other) { _ptr = other._ptr; if (_ptr) { _ptr->AddRef(); } }
	inline ComRef& operator=(const ComRef& other) { Release(); _ptr = other._ptr; if (_ptr) { _ptr->AddRef(); } return *this; }

	inline T** operator &() { Release(); return &_ptr; }
	inline T* operator *() { return _ptr; }
	inline T* operator ->() { return _ptr; }

	inline void Release() { if (_ptr) { _ptr->Release(); _ptr = nullptr; } }
	inline ~ComRef() { Release(); }
};

class SymbolEnumerator
{
public:
	ComRef<IDiaEnumSymbols> _enumerator;
	ComRef<IDiaSymbol> _sym;

	inline SymbolEnumerator() {}

	inline bool Find(IDiaSymbol* parent, enum SymTagEnum tagType, const wchar_t* filter = nullptr, NameSearchOptions opt = nsNone) {
		return (SUCCEEDED(parent->findChildren(tagType, filter, opt, &_enumerator)));
	}

	inline bool Next() {
		ULONG celt = 0;
		return (SUCCEEDED(_enumerator->Next(1, &_sym, &celt)) && (celt == 1));
	}

	inline IDiaSymbol* operator *() { return _sym._ptr; }
	inline IDiaSymbol* operator ->() { return _sym._ptr; }
	inline ComRef<IDiaSymbol>& ref() { return _sym; }
};

static ComRef<IDiaSymbol> FindSymbol(IDiaSymbol* parent, enum SymTagEnum tagType, const wchar_t* filter = nullptr)
{
	ComRef<IDiaEnumSymbols> enumerator;
	if (SUCCEEDED(parent->findChildren(tagType, filter, nsNone, &enumerator))) {
		IDiaSymbol* child = nullptr;
		ULONG celt = 0;
		if (SUCCEEDED(enumerator->Next(1, &child, &celt)) && (celt == 1)) {
			return ComRef<IDiaSymbol>(child);
		}
	}
	return ComRef<IDiaSymbol>();
}
