#pragma once
#include "zzzmathlib.h"
#include "StdAfx.h"


#define MAX_CHAT_TYPE1			10

struct MUChatType	//-> 24
{
	DWORD a1;
	DWORD a2;
	DWORD a3;
/*+12*/	DWORD	Unknown12;
/*+16*/	DWORD	Unknown16;
/*+20*/	DWORD	Unknown20;
};
struct MUChat
{
			BYTE	Gap0[4];
	//DWORD Unknown0;
/*+4*/		DWORD	Unknown4;
/*+8*/		DWORD	Unknown8;
/*+12*/		DWORD	Unknown12;
/*+16*/		MUChatType ChatType[MAX_CHAT_TYPE1];
/*+256*/	bool	IsActiveChatType[MAX_CHAT_TYPE1];
BYTE gap266[26];
/*+268*/	//SomeType LPVOID;
/*+292*/	DWORD	WindowPosX;
/*+296*/	DWORD	WindowPosY;
/*+300*/	DWORD	ScrollX;
/*+304*/	DWORD	ScrollY;
/*+308*/	DWORD	WindowWidth;
/*+312*/	DWORD	WindowHeight;
/*+316*/	DWORD	WindowLineCount;
/*+320*/	DWORD	MessageType;
/*+324*/	DWORD	Unknown324;
/*+328*/	DWORD	WindowScrollPos;
/*+332*/	DWORD	Unknown332;
/*+336*/	float	AlphaColor;
/*+340*/	DWORD	Unknown340;
/*+344*/	BYTE	WindowsActivo;
/*+345*/	BYTE	Unknown345;
/*+345*/	BYTE	gap346[2];
/*+348*/	DWORD	Unknown348;
};