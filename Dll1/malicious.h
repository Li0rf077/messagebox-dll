#pragma once

#ifdef Dll1_EXPORTS
#define Dll1_API __declspec(dllexport)
#else
#define Dll1_API __declspec(dllimport)
#endif

extern "C" Dll1_API void msg();
