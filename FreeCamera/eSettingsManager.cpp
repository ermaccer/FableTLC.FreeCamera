#include "eSettingsManager.h"
#include "IniReader.h"
#include <Windows.h>

int  eSettingsManager::keyToggleHUD;
int  eSettingsManager::keyToggleFreeCam;

void eSettingsManager::Init()
{
	CIniReader reader("");
	keyToggleFreeCam = reader.ReadInteger("Keys", "keyToggleFreeCam", VK_F1);
	keyToggleHUD = reader.ReadInteger("Keys", "keyToggleHUD", VK_F2);
}
