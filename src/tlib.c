#include "stdafx.h"

__declspec(dllexport) int TeeLib_Init()
{
	printf("Started TeeLib :)\n");
	return 1;
}

__declspec(dllexport) int TeeLib_Destroy()
{
	printf("Good bye from TeeLib\n");
	return 1;
}
