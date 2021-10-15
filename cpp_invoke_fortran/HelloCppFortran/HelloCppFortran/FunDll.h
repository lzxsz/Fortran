//FunDll.h

#pragma once

// For DLL function import. 
#define __DLLIMPORT__  __declspec(dllimport)
// Compatible for C
#ifdef __cplusplus
extern "C" {
#endif
	__DLLIMPORT__ int myadd(int, int);

	// Compatible for C
#ifdef __cplusplus
}
#endif
