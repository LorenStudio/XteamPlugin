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
	SetDword(0x004D57C7 + 1, (DWORD)"Interface\\lo_back_im01.jpg");
	SetDword(0x004D57E7 + 1, (DWORD)"Interface\\lo_back_im02.jpg");
	SetDword(0x004D5807 + 1, (DWORD)"Interface\\lo_back_im03.jpg");
	SetDword(0x004D5827 + 1, (DWORD)"Interface\\lo_back_im04.jpg");
	SetDword(0x004D5847 + 1, (DWORD)"Interface\\lo_back_im05.jpg");
	SetDword(0x004D5867 + 1, (DWORD)"Interface\\lo_back_im06.jpg");
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
