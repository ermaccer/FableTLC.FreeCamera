#include "pch.h"
#include "PcMouse.h"
#include <Windows.h>
#include <iostream>
#include <math.h>

CCamera* mouseLookCam = nullptr;

bool CPCMouseLook::m_bEnableFreeCamera = false;
bool CPCMouseLook::m_bDisableHUD = false;

void CPCMouseLook::Update()
{	
	CCamera* cam = (CCamera*)(*(int*)(this + 64) + 4);
	mouseLookCam = cam;

	if (!m_bEnableFreeCamera)
		((void(__thiscall*)(CPCMouseLook*))0x84DC10)(this);

	if (GetAsyncKeyState(VK_F1) & 1)
		m_bEnableFreeCamera ^= 1;

	if (GetAsyncKeyState(VK_F2) & 1)
		m_bDisableHUD ^= 1;
}