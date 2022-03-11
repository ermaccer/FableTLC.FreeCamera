#pragma once

#include "PcMouse.h"

class DirectInputState {
public:
	int GetDIKeyCode();
};

class CInputProcess {
public:
};


class CInputProcessControlFreeCamera : public CInputProcess
{
public:
	char pad[40];
	CCamera* cam;

	void Update(DirectInputState* keyState, int unk);
};

class CInputProcessCameraLookAround : public CInputProcess {
public:
	void Update(DirectInputState* keyState, int unk);
};