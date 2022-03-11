// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "MemoryMgr.h"
#include "PcMouse.h"
#include "InputProcess.h"
#include <iostream>

using namespace Memory::VP;

void Init()
{
#ifdef _DEBUG
	AllocConsole();
	freopen("CONIN$", "r", stdin);
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w", stderr);
#endif // _DEBUG

	InjectHook(0x69B7F4, &CPCMouseLook::Update);
	Patch(0x1237A00, &CInputProcessCameraLookAround::Update);
}

extern "C"
{
	__declspec(dllexport) void InitializeASI()
	{
		Init();
	}
}