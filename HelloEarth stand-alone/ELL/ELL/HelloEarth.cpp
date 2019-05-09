#include "stdafx.h"
#include "HelloEarth.h"

// Modified from: https://msdn.microsoft.com/en-us/magazine/mt795188.aspx
STDMETHODIMP ellHelloEarth(BYTE &count, SAFEARRAY **ppsa) noexcept {   // STDMETHODIMP: Note that the STDMETHODIMP preprocessor macro implies that the method returns an HRESULT
	try {
		CComSafeArray<BYTE> sa(count);					// Create a safe array storing 'count' BYTEs
		sa.Attach(*ppsa);								// This is the line that was missing ! Inspiration from: https://stackoverflow.com/questions/1778491/how-does-one-return-a-local-ccomsafearray-to-a-lpsafearray-output-parameter/18071414#18071414
		BYTE i = 0;
		std::string str = "HELLO EARTH";				// Itterating string from https://stackoverflow.com/questions/9438209/for-every-character-in-string
		for (char &c : str) {
			sa[i] = BYTE(c);							// Fill the safe array with some data
			i++;
		}
		*ppsa = sa.Detach();							// Return (pass control of) the safe array to the caller as an output parameter
	}
	catch (const CAtlException &e) {
		return e;										// Convert ATL exceptions to HRESULTs
	}
	return S_OK;										// All right  // This return checked: S_OK = 0x00000000 (tested with E_UNEXPECTED)
}