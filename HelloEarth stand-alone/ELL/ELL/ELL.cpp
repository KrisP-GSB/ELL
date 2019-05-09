// ELL.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "ELL.h"

void __stdcall ellDummy(typEllIn &ellIn, typEllOut &ellOut) {
	double A = ellIn.a;
	A = A * 4;
	ellOut.a = (A + double(ellIn.b)) / ellIn.c;
	ellOut.b = -1;
	ellOut.c = ellIn.c;
}
