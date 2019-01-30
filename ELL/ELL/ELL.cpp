// ELL.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

struct typTmp {
	int a = 0;
	int b = 0;
	double c = 0;
	int l = 0;
};

int __stdcall ellTest(int i) {
	i++;
	return i;
}

double __stdcall ellPassStruct(typTmp &tmp) {
	double r;
	r = tmp.a + tmp.b + tmp.c;
	return r;
}

double __stdcall ellPassStruct02(typTmp &tmp) {
	double r;
	for (int i = 0; i < tmp.l; i++) {
		r = tmp.a + tmp.b + tmp.c;
	}
	return r;
}