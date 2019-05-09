#include "stdafx.h"
#include "TestPassVariables.h"
#include <iostream>

double __stdcall ellPassStruct(typTmp &tmp) {
	double r;
	r = (double)tmp.a + (double)tmp.b + (double)tmp.c;
	return r;
}

double __stdcall ellPassStruct02(typTmp &tmp) {
	double r;
	for (int i = 0; i < tmp.l; i++) {
		r = tmp.a + tmp.b + tmp.c;
	}
	return r;
}

void __stdcall ellPassStruct03(typTmp &tmp) {
	tmp.r = tmp.a + tmp.b + tmp.c;
}

void __stdcall ellChangeRemotely(typTmp &tmp) {
	tmp.c += (double)tmp.a + (double)tmp.b + tmp.r; 
}
