#include "stdafx.h"

__declspec(dllexport) int TeeLib_Init()
{
	printf("Started TeeLib :)\n");
}

__declspec(dllexport) int TeeLib_Destroy()
{
	printf("Good bye from TeeLib\n");
}
