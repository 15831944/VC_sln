// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//  are changed infrequently
//

#pragma once

// Change these values to use different versions
#define WINVER		0x0500
#define _WIN32_WINNT	0x0501
#define _WIN32_IE	0x0501
#define _RICHEDIT_VER	0x0200

#include <atlstr.h>
#define _WTL_NO_CSTRING

#include <atlbase.h>
#include <atlapp.h>

extern CAppModule _Module;

#include <atlwin.h>

#include <atltypes.h>

#include <iostream>
#include <string>
#include <vector>
#include <boost/smart_ptr.hpp>
#include <boost/make_shared.hpp>

#include <LuaPlus/LuaPlus.h>
using namespace LuaPlus;
#if defined(_DEBUG) || defined(DEBUG)
	#pragma comment(lib, "LuaPlusd.lib")	
#else
	#pragma comment(lib, "LuaPlus.lib")	
#endif


#include <gdiplus.h>
#pragma comment(lib, "gdiplus.lib")

#include <rover/rover.h>

#define cairo_public 
#include <cairo-win32.h>
#pragma comment(lib, "cairo-static.lib")
#pragma comment(lib, "libpng.lib")
#pragma comment(lib, "zlib.lib")


#if defined _M_IX86
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_IA64
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif