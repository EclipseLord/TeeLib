#include "stdafx.h"

__declspec(dllexport) void TeeLib_Init()
{
	printf("Started TeeLib :)\n");
}

__declspec(dllexport) void TeeLib_Destroy()
{
	printf("Good bye from TeeLibn\n");
}
