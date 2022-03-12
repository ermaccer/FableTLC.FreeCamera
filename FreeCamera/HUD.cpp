#include "pch.h"
#include "HUD.h"
#include "PcMouse.h"

bool __fastcall HUD::Display(int ptr)
{
	if (CPCMouseLook::m_bDisableHUD)
		return false;
	else
		return *(int*)(ptr + 660) != 1;
}
