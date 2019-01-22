#pragma once

// trim from start (in place)
static inline void ltrim(std::wstring &s) {
	s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int ch) {
		return !std::isspace(ch);
	}));
}

// trim from end (in place)
static inline void rtrim(std::wstring &s) {
	s.erase(std::find_if(s.rbegin(), s.rend(), [](int ch) {
		return !std::isspace(ch);
	}).base(), s.end());
}

// trim from both ends (in place)
static inline void trim(std::wstring &s) {
	ltrim(s);
	rtrim(s);
}

// trim from start (copying)
static inline std::wstring ltrim_copy(std::wstring s) {
	ltrim(s);
	return s;
}

// trim from end (copying)
static inline std::wstring rtrim_copy(std::wstring s) {
	rtrim(s);
	return s;
}

// trim from both ends (copying)
static inline std::wstring trim_copy(std::wstring s) {
	trim(s);
	return s;
}

static inline bool replace(std::wstring& str, const std::wstring& from, const std::wstring& to) {
	size_t start_pos = str.find(from);
	if (start_pos == std::wstring::npos)
		return false;
	str.replace(start_pos, from.length(), to);
	return true;
}

static inline void replaceAll(std::wstring& str, const std::wstring& from, const std::wstring& to) {
	if (from.empty())
		return;
	size_t start_pos = 0;
	while ((start_pos = str.find(from, start_pos)) != std::wstring::npos) {
		str.replace(start_pos, from.length(), to);
		start_pos += to.length();
	}
}

static inline std::vector<std::wstring> split(const std::wstring& input, const std::wstring& regex) {
	std::wregex re(regex);
	std::wsregex_token_iterator first{ input.begin(), input.end(), re, -1 }, last;
	return{ first, last };
}

static inline bool startsWith(const std::wstring& s, const std::wstring& prefix) {
    return s.size() >= prefix.size() && s.compare(0, prefix.size(), prefix) == 0;
}

static inline bool startsWith(const wchar_t* s, const wchar_t* prefix) {
    const size_t slen = wcslen(s);
	const size_t plen = wcslen(prefix);
	if (plen > slen) return false;
	return (wcsncmp(s, prefix, plen) == 0);
}

static inline bool endsWith(const std::wstring& s, wchar_t ch) {
    const size_t n = s.size();
	return ((n > 0) && (s[n - 1] == ch));
}
