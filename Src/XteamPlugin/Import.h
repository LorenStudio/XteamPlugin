#pragma once
// ----------------------------------------------------------------------------------------------

#include "stdafx.h"
// ----------------------------------------------------------------------------------------------

#include <gl\GL.h>
#pragma comment(lib, "Opengl32.lib")
#pragma comment(lib, "Ws2_32.lib")

#define pDrawBarForm			((void(__cdecl*)(float PosX, float PosY, float Width, float Height, float Arg5, int Arg6)) 0x6378A0)


#define	sub_944E50_Addr		((char(*)()) 0x944E50)
#define	sub_93F370_Addr		((void*(*)()) 0x93F370)
#define sub_93FCA0_Addr		((bool(__thiscall*)(int a1)) 0x93FCA0)
#define sub_93F600_Addr		((char(__thiscall*)(char* a1)) 0x93F600)
#define sub_93FD10_Addr		((bool(__thiscall*)(int a1)) 0x93FD10)
#define sub_93F950_Addr		((char(__thiscall*)(char* a1)) 0x93F950)
#define sub_941030_Addr		((int(__thiscall*)(BYTE* a1)) 0x941030)
#define sub_941000_Addr		((int(__thiscall*)(BYTE* a1)) 0x941000)
#define sub_944FE0_Addr		((void(__thiscall*)(BYTE *This, int a2, BYTE *a3)) 0x944FE0)
#define sub_9406C0_Addr		((char(__thiscall*)(BYTE* a1)) 0x9406C0)
#define sub_9406A0_Addr		((BYTE*(__thiscall*)(BYTE* a1, char a2)) 0x9406A0)
#define sub_8611E0_Addr		((int(__thiscall*)(DWORD* a1)) 0x8611E0)
#define sub_815130_Addr		((int(__thiscall*)(char *This, int a2, char a3)) 0x815130)
#define sub_861900_Addr		((int(__thiscall*)(int This)) 0x861900)
#define RenderBitmap						((void(__cdecl*)(int ImageID, float PosX, float PosY, float Width, float Height, int Arg6, int Arg7, float ScaleX, float ScaleY, bool ScaleSize, bool ScalePosition, bool ScaleAlpha)) 0x637C60)
#define pSetBlend				((void(__cdecl*)(BYTE Mode)) 0x635FD0)
#define pLoadImage				((int(__cdecl*)(char * Folder, int Code, int Arg3, int Arg4, int Arg5, int Arg6)) 0x00772330)
#define pDrawImage              ((void(__cdecl*)(int ImageID, float PosX, float PosY, float Width, float Height, int Arg6, int Arg7, float ScaleX, float ScaleY, bool ScaleSize, bool ScalePosition, bool ScaleAlpha)) 0x637C60)
#define pGLSwitchBlend			((void(__cdecl*)()) 0x636070)
#define pGLSwitch				((void(__cdecl*)()) 0x635F50)
#define oShowChatMessage_Call	0x0078B0BC
#define pShowChatMessage		((bool(__thiscall*)(LPVOID This)) 0x00788A80)
#define pDrawGUI				((void(__cdecl*)(DWORD, float, float, float, float)) 0x00790B50)
#define pShowChatMessage		((bool(__thiscall*)(LPVOID This)) 0x00788A80)
#define pSetChatMessageType		((int(__thiscall*)(LPVOID This, int Type)) 0x0078B870)
#define pCursorX				*(int*)0x879340C
#define pCursorY				*(int*)0x8793410
#define pWinWidth				*(GLsizei*)0x0E61E58
#define pWinHeight				*(GLsizei*)0x0E61E5C
#define pWinWidthReal			*(float*)0xE7C3D4
#define pWinHeightReal			*(float*)0xE7C3D8
#define pWinFontHeight			*(int*)0x81C0380
#define pSetBackgroundTextColor	((void(__thiscall*)(LPVOID This, int r, int g, int b, int h)) 0x004200B0)
#define pDrawText				((int(__thiscall*)(LPVOID This, int PosX, int PosY, LPCTSTR Text, int nCount, int nTabPositions, LPINT lpnTabStopPositions, int nTabOrigin)) 0x00420150)
#define pTextThis				((LPVOID(*)()) 0x0041FE10)
#define pPartyMemberCount		*(DWORD*)0x81F6B6C
#define oUserPreviewStruct		*(int*)0x7BC4F04
#define pSetTextColor			((void(__thiscall*)(LPVOID This, BYTE r, BYTE g, BYTE b, BYTE h)) 0x00420040)
#define pDrawButton				((void(__cdecl*)(DWORD, float, float, float, float, float, float)) 0x00790E40)
#define pCheckMouseOver        //(float JcRenderY, float JcWidth, float JcHeight)
#define pMapNumber				*(int*)0x0E61E18
