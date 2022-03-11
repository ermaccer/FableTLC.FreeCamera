#pragma once

struct CVector {
	float x, y, z;
};

struct CQuat {
	float x, y, z, w;
};

struct CCamera {
	CVector pos;
	// or quat? dunno
	float Mat[3][3];
};

class CPCMouseLook {
public:
	static bool m_bEnableFreeCamera;
	static CVector m_vecCameraRotation;
	void Update();
};


extern CCamera* mouseLookCam;
