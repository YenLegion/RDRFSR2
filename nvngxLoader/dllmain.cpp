// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <Windows.h>
#include <iostream>

DWORD _GPU_CHK = 0x2729774;

void Start() {
    uintptr_t base = (uintptr_t)GetModuleHandle(NULL);
	
	//Patch GPU_CHK
    PVOID t = (PVOID)(base + _GPU_CHK);
    DWORD d, ds;
    VirtualProtect(t, 6, PAGE_EXECUTE_READWRITE, &d);
    memset(t, 0x90, 6);
    VirtualProtect(t, 6, d, &ds);
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        Start();
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

