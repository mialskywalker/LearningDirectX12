#ifndef __HELPERS__
#define __HELPERS__

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

inline void ThrowIfFailed(HRESULT hr) {
	if (FAILED(hr)) {
		throw std::exception();
	}
}

#endif