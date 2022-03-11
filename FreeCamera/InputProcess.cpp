#include "pch.h"
#include "InputProcess.h"
#include "PcMouse.h"
#include <iostream>
static CInputProcessControlFreeCamera freeCam;
void CInputProcessCameraLookAround::Update(DirectInputState* keyState, int unk)
{
#ifdef _DEBUG
	printf("KEY: %d\n", keyState->GetDIKeyCode());
#endif // _DEBUG

	if (!CPCMouseLook::m_bEnableFreeCamera)
		((void(__thiscall*)(CInputProcess*, DirectInputState*, int))0x68D790)(this, keyState, unk);
	else
	{
		if (mouseLookCam)
		{
			freeCam.cam = mouseLookCam;
			freeCam.Update(keyState, unk);
		}

	}

}

int DirectInputState::GetDIKeyCode()
{
	return ((int(__thiscall*)(DirectInputState*))0xA03B70)(this);
}

void CInputProcessControlFreeCamera::Update(DirectInputState* keyState, int unk)
{
	((void(__thiscall*)(CInputProcess*, DirectInputState*, int))0x68CB90)(this, keyState, unk);
}
