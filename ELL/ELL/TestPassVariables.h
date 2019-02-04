#pragma once

struct typTmp {
	int a = 0;
	int b = 0;
	double c = 0;
	int l = 0;
	int r = 0;			// I can't make this a double. Are C++ and VBA doubles not matching? --> need to use PTRSAFE
	//int arr[5];
	int e = 0;
};

int __stdcall ellPassStruct(typTmp &tmp);
int __stdcall ellPassStruct02(typTmp &tmp);
void __stdcall ellPassStruct03(typTmp &tmp); 
void __stdcall ellChangeRemotely(typTmp &tmp);
