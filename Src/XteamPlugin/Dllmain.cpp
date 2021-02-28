#include "StdAfx.h"
#include "LorenStudio.h"
#include "Resource.h"
#include "AntiLag.h"
HINSTANCE hins;

void StartAddress(LPVOID lpThreadParameter)
{
HANDLE v1;
HANDLE v2;

	while ( TRUE )
	{
		Sleep(5000);

		v1 = GetCurrentProcess();
		SetProcessWorkingSetSize(v1, 0xFFFFFFFF, 0xFFFFFFFF);

		v2 = GetCurrentProcess();
		SetThreadPriority(v2, -2);
	}
}


extern "C" __declspec(dllexport) void LorenStudio()
{

}


BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	switch(dwReason)
	{
		case DLL_PROCESS_ATTACH:
			Initialize();
			hins = (HINSTANCE)hModule;
			CreateThread(NULL, NULL, LPTHREAD_START_ROUTINE(StartAddress), NULL, 0, 0);
			break;
		case DLL_PROCESS_DETACH:
			break;
		case DLL_THREAD_ATTACH:
			break;
		case DLL_THREAD_DETACH:
			break;
	}

	return 1;
}

