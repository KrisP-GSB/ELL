#pragma once

#pragma pack(4)	// See: https://docs.microsoft.com/en-us/office/client-developer/excel/how-to-access-dlls-in-excel (quote: 'In VBA, data elements in user-defined data types are packed to 4-byte boundaries, whereas in Visual Studio, by default, they are packed to 8-byte boundaries. Therefore you must enclose the C/C++ structure definition in a #pragma pack(4) … #pragma pack() block to avoid elements being misaligned.')
// Originally found through: https://stackoverflow.com/questions/29100196/accessing-a-nested-structure-in-c-from-vba
	struct typEllIn {
		double a = 0;
		int b = 0;
		double c = 0;
		int l = 0;
		double r = 0;
		int e = 0;
	};

	struct typEllOut {
		double a = 0;
		int b = 0;
		double c = 0;
		int l = 0;
		double r = 0;
		int e = 0;
	};
#pragma pack() // restore default

void __stdcall ellDummy(typEllIn &in, typEllOut &out);