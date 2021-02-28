#include "stdafx.h"
#include "Defines.h"
#include "TMemory.h"
#include "Offset.h"
#include "Import.h"
#include "Util.h"
#include "User.h"
#include "SmokeEffect.h"
#include "AntiLag.h"

void Load()
{
	InitAntiLag();
	AttachNewEffect();
SetCompleteHook(0xE9,0x005880F0,0x0058811F); //FIX ASA GM BC
SetDword(0x00588444+3,4095);
}



void Initialize()
{
	Load();
	InitAntiLagSystem();
}