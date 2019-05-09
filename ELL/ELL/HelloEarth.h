#pragma once
#include "string"
#include "oaidl.h"
#include "atlsafe.h"		// See: https://msdn.microsoft.com/en-us/magazine/mt795188.aspx

STDMETHODIMP ellHelloEarth(BYTE &count, SAFEARRAY **ppsa) noexcept;