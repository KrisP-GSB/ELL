// ELL.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

int __stdcall ellTest(int i) {
	i++;
	return i;
}
