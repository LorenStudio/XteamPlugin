#include "stdafx.h"
#include "Defines.h"
#include "TMemory.h"
#include "Offset.h"
#include "Import.h"
#include "Util.h"
#include "User.h"
#include "SmokeEffect.h"
#include "AntiLag.h"
#include "LorenStudio.h"

void Load()
{
	SetDword(0x004D57C7 + 1, (DWORD)"Interface\\lo_back_im01.jpg");
	SetDword(0x004D57E7 + 1, (DWORD)"Interface\\lo_back_im02.jpg");
	SetDword(0x004D5807 + 1, (DWORD)"Interface\\lo_back_im03.jpg");
	SetDword(0x004D5827 + 1, (DWORD)"Interface\\lo_back_im04.jpg");
	SetDword(0x004D5847 + 1, (DWORD)"Interface\\lo_back_im05.jpg");
	SetDword(0x004D5867 + 1, (DWORD)"Interface\\lo_back_im06.jpg");
	SetCompleteHook(0xE8, 0x005EDDC5,&RenderObjectVisual);
	InitAntiLag();
	AttachNewEffect();
SetCompleteHook(0xE9,0x005880F0,0x0058811F); //FIX ASA GM BC
SetDword(0x00588444+3,4095);
}


void InitLoginTheme()
{
	HMODULE hModule = LoadLibraryA("lorenstudio.dll");

	void (*EntryProc)(char*) = ((void(*)(char*))GetProcAddress(hModule, "EntryProc"));

	if (EntryProc)
	{
  EntryProc("EX700");
	}

}


void Initialize()
{       InitLoginTheme();
	Load();
	InitAntiLagSystem();
}


void RenderObjectVisual(int a1, int a2)
{
vec3_t Bone;
vec3_t Color;
vec3_t WorldPos;

	if (pMapNumber == 94)
	{  
		switch ( *(DWORD *)(a1 + 48) )   
		{
			case 1:
			{
			BeginRender(1.0);
			*(DWORD *)(a1 + 60) = -2;
			*(BYTE*)(a2 + 136) = 0;
			float v552 = 4000;
			float v551 = ((int) (v552 - *(float*)0x5EF5A1C * 0.75f) % 4001) * 0.0002500000118743628;
			RenderMesh(a2,
			  0,
			  66,
			  *(float *)(a1 + 152),
			  *(DWORD *)(a1 + 68),
			  *(float *)(a1 + 100),
			  *(float *)(a1 + 104),
			  v551,
			  -1);
			*(BYTE*)(a2 + 136) = -1;
			EndRender();
			}
			break;

						case 5:
			{
			BeginRender(1.0);
			*(BYTE*)(a2 + 136) = 0;
            *(float *)(a2 + 72) = 0.44705882352;
            *(float *)(a2 + 76) = 0.44705882352;
            *(float *)(a2 + 80) = 0.22745098039;
			RenderMesh(a2,
			  0,
			  68,
			  *(float *)(a1 + 152),
			  *(DWORD *)(a1 + 68),
			  *(float *)(a1 + 100),
			  *(float *)(a1 + 104),
			  *(float *)(a1 + 108),
			  32042);
			RenderMesh(a2,
			  23,
			  68,
			  *(float *)(a1 + 152),
			  *(DWORD *)(a1 + 68),
			  *(float *)(a1 + 100),
			  *(float *)(a1 + 104),
			  *(float *)(a1 + 108),
			  32042);
			RenderMesh(a2,
			  23,
			  68,
			  *(float *)(a1 + 152),
			  *(DWORD *)(a1 + 68),
			  *(float *)(a1 + 100),
			  *(float *)(a1 + 104),
			  *(float *)(a1 + 108),
			  32042);
			RenderMesh(a2,
			  24,
			  68,
			  *(float *)(a1 + 152),
			  *(DWORD *)(a1 + 68),
			  *(float *)(a1 + 100),
			  *(float *)(a1 + 104),
			  *(float *)(a1 + 108),
			  32042);
			RenderMesh(a2,
			  25,
			  68,
			  *(float *)(a1 + 152),
			  *(DWORD *)(a1 + 68),
			  *(float *)(a1 + 100),
			  *(float *)(a1 + 104),
			  *(float *)(a1 + 108),
			  32042);
			RenderMesh(a2,
			  26,
			  68,
			  *(float *)(a1 + 152),
			  *(DWORD *)(a1 + 68),
			  *(float *)(a1 + 100),
			  *(float *)(a1 + 104),
			  *(float *)(a1 + 108),
			  32042);
			RenderMesh(a2,
			  27,
			  68,
			  *(float *)(a1 + 152),
			  *(DWORD *)(a1 + 68),
			  *(float *)(a1 + 100),
			  *(float *)(a1 + 104),
			  *(float *)(a1 + 108),
			  32042);
			RenderMesh(a2,
			  28,
			  68,
			  *(float *)(a1 + 152),
			  *(DWORD *)(a1 + 68),
			  *(float *)(a1 + 100),
			  *(float *)(a1 + 104),
			  *(float *)(a1 + 108),
			  32042);
			*(BYTE*)(a2 + 136) = -1;
			EndRender();
			float v409 = (double)(rand() % 10) / 20.0 + 1.399999976158142;
			float v19 = v409 - 0.300000011920929;
			Vector( 0.0, 0.0, 0.0, WorldPos);
			//TransformPosition(a2, (int)&BoneTransform + 0x5D0, WorldPos, Bone, 0);
			TransformPosition(a2, Joint(37), WorldPos, Bone, 0);
			Vector( 1.0, 0.30000001, 0.0, Color);		
			CreateSprite(32114, Bone, v409, Color, a1, 0.0, 0);
            CreateSprite(32114, Bone, v19, Color, a1, 0.0, 0);
			v409 = (double)(rand() % 10) / 20.0 + 1.0;
			float v20 = v409 + 0.300000011920929;
			CreateSprite(32002, Bone, v20, Color, a1, 0.0, 0);
			v409 = (double)(rand() % 8) / 20.0 + 0.4000000059604645;
			CreateSprite(32114, Bone, v409, Color, a1, 0.0, 0);
			float v21 = v409 - 0.2000000029802322;
            CreateSprite(32114, Bone, v21, Color, a1, 0.0, 0);
			}
			break;
			
			case 38:
			{
			*(DWORD *)(a1 + 60) = -2;
			Vector( 0.020, 0.020, 0.050, Color);
			CreateParticle(32146, a1 + 252, a1 + 264, Color, 1,*(float *)(a1 + 96), a2);
			}
			break;
			
			case 54:
			{
			*(DWORD *)(a1 + 60) = -2;
			if ( !(rand() % 2) )	
				{
				Vector( 1.0, 1.0, 1.0, Color);			
				CreateParticle(32287, a1 + 252, a1 + 264, Color, 2, *(float *)(a1 + 96), 0);
				}
			}
			break;
			}
		}
	RenderAidaObjectVisual(a1, a2);
}

