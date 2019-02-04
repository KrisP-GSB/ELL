#include "stdafx.h"
#include <string>
#include "HelloEarth.h"

std::string __stdcall ellHello(int i) {		// This does not work, returning strings from C++ dll's is difficult (will cause excel to crash)
	i++;
	return "Hello Earth !";
}

int __stdcall ellHello01(int i) {
	i++;
	return i;
}