#include "stdafx.h"
#include "TestPassVariables.h"

int __stdcall ellPassStruct(typTmp &tmp) {
	int r;
	r = tmp.a + tmp.b + tmp.c;
	return r;
}

int __stdcall ellPassStruct02(typTmp &tmp) {
	int r;
	for (int i = 0; i < tmp.l; i++) {
		r = tmp.a + tmp.b + tmp.c;
	}
	return r;
}

void __stdcall ellPassStruct03(typTmp &tmp) {
	tmp.r = tmp.a + tmp.b + tmp.c;
}

void __stdcall ellChangeRemotely(typTmp &tmp) {
	tmp.c += tmp.a + tmp.b ; //tmp.c++;
}

