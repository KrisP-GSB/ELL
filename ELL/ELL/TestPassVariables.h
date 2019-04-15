#pragma once

#pragma pack(4)	// See: https://docs.microsoft.com/en-us/office/client-developer/excel/how-to-access-dlls-in-excel (quote: 'In VBA, data elements in user-defined data types are packed to 4-byte boundaries, whereas in Visual Studio, by default, they are packed to 8-byte boundaries. Therefore you must enclose the C/C++ structure definition in a #pragma pack(4) … #pragma pack() block to avoid elements being misaligned.')
				// Originally found through: https://stackoverflow.com/questions/29100196/accessing-a-nested-structure-in-c-from-vba
struct typTmp {
	double a = 0;
	int b = 0;
	double c = 0;
	int l = 0;
	int r = 0;			// I can't make this a double. Are C++ and VBA doubles not matching? --> need to use PTRSAFE
	//int arr[5];
	int e = 0;
};
#pragma pack() // restore default


int __stdcall ellPassStruct(typTmp &tmp);
int __stdcall ellPassStruct02(typTmp &tmp);
void __stdcall ellPassStruct03(typTmp &tmp); 
void __stdcall ellChangeRemotely(typTmp &tmp);
