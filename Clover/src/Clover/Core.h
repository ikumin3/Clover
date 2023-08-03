#pragma once

#ifdef CL_PLATFORM_WINDOWS
	#ifdef CL_BUILD_ALL
		#define CLOVER_API __declspec(dllexport)
	#else
		#define CLOVER_API __declspec(dllimport)
	#endif
#else
	#error Clover only supports Windows!
#endif