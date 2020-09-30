#pragma once
#include "imports.h"

// old offsets
//DWORD CREATETRACK = 0xC58980;
//DWORD CLOSETRACK = 0xC58130;
//DWORD OPENTRACK = 0xC59E10;
//DWORD CMDADDTEXT = 0x108BB10;
//DWORD SETBITRATE = 0xE18B80;
//DWORD AES_SET_ENCRYPT_KEY = 0x106B920;
//DWORD ENABLESKIPS = 0x745DB0;
//DWORD GETFILEID = 0x70B460;
//DWORD SIGNAL = 0xB480B0;

//1.1.32.618.gda5638a6
/*DWORD CREATETRACK = 0xC6F750;
DWORD CLOSETRACK = 0xC6F230;
DWORD OPENTRACK = 0xC703D0;
DWORD CMDADDTEXT = 0x10938B0;
DWORD SETBITRATE = 0x5B0970;
DWORD AES_SET_ENCRYPT_KEY = 0x10731C0;
DWORD ENABLESKIPS = 0x72CEC0;
DWORD GETFILEID = 0x6E8420;
DWORD SIGNAL = 0xB63DF0; */

//offsets for spotify 1.1.42
DWORD OPENTRACK = 0x8B6F70;
DWORD CREATETRACK = 0x8B6080;
DWORD ENABLESKIPS = 0x319DF0;
DWORD CMDADDTEXT = 0x1105360;//D05360; relative
DWORD SIGNAL = 0xB21680; //721680 relative;

// not updated offsets below
DWORD GETFILEID = 0x6E8420;
DWORD SETBITRATE = 0x5B0970;
DWORD AES_SET_ENCRYPT_KEY = 0x10731C0;
DWORD CLOSETRACK = 0xC6F230;
//CreateTrack
//typedef void(__thiscall* CreateTrack_t)(void* _this, int a2, int a3, double speed, int a5, int a6, int flag, int a8, int a9);
//typedef void(__fastcall* CreateTrack_t)(int a2, int a3, float a1, int a4, double speed, int a6, int a7, int flag, int a8, int a9);
typedef void(__fastcall* CreateTrack_t)(void* _this, int a2, int a3, __int64 a1, int a4, double speed, int a6, int a7, int flag, int a8, int a9);
extern CreateTrack_t CreateTrack;
CreateTrack_t CreateTrack = (CreateTrack_t)CREATETRACK;

//CloseTrack
typedef void(__thiscall* CloseTrack_t)(void* _this, int a2, int a3, int a4, int a5, int a6);
extern CloseTrack_t CloseTrack;
CloseTrack_t CloseTrack = (CloseTrack_t)CLOSETRACK;

//OpenTrack
//typedef  void(__thiscall* OpenTrack_t)(void* _this, int a2, int a3, int a4, int a5, __int64 position, int a7, int a8);
//typedef  void(__thiscall* OpenTrack_t)(void* _this, int a2, int a3, int a4, __int64 position, int a6, int a7);
typedef void(__thiscall* OpenTrack_t)(void* _this, int a2, int a3, DWORD *a4, __int64 position, char a6, DWORD *a7);
extern OpenTrack_t OpenTrack;
OpenTrack_t OpenTrack = (OpenTrack_t)OPENTRACK;

typedef void(__cdecl* CmdAddText_t)(int a1, int a2, int a3, int a4, int a5, const char* a7, const char* dummy0, int dummy1, int dummy2, int dummy3, int dummy4, int dummy5);
extern CmdAddText_t CmdAddText;
CmdAddText_t CmdAddText = (CmdAddText_t)CMDADDTEXT;

//SetBitrate
typedef void(__cdecl* SetBitrate_t)(int a1, int a2, int a3, int a4, int a5);
extern SetBitrate_t SetBitrate;
SetBitrate_t SetBitrate = (SetBitrate_t)SETBITRATE;

//EnableSkips
typedef void(__thiscall* EnableSkips_t)(void* _this); // BOOL __thiscall
extern EnableSkips_t EnableSkips;
EnableSkips_t EnableSkips = (EnableSkips_t)ENABLESKIPS;

//GetFileID
//typedef void(__cdecl* GetFileID_t)(int* a1, int a2);
typedef void(__thiscall* GetFileID_t)(void* _this, int* a2, int a3);
extern GetFileID_t GetFileID;
GetFileID_t GetFileID = (GetFileID_t)GETFILEID;

//todo: rotto??
//aes_set_encrypt_key
typedef void(__cdecl* aes_set_encrypt_key_t)(unsigned int* key, DWORD* userKey, int bits, const char a4); // char a4 ??
extern aes_set_encrypt_key_t aes_set_encrypt_key;
aes_set_encrypt_key_t aes_set_encrypt_key = (aes_set_encrypt_key_t)AES_SET_ENCRYPT_KEY;

//Signal
typedef void(__stdcall* Signal_t)(int a2, int a3);
extern Signal_t Signal;
Signal_t Signal = (Signal_t)SIGNAL;