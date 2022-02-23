﻿// header.h: 표준 시스템 포함 파일
// 또는 프로젝트 특정 포함 파일이 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용을 Windows 헤더에서 제외합니다.
// Windows 헤더 파일
#include <windows.h>
// C 런타임 헤더 파일입니다.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <string.h>
#include <vector>
#include <locale>

using namespace std;

#include "SingleTon.h"
#include "CCore.h"
#include "CTimeManager.h"
#include "CKeyManager.h"
#include "CSceneManager"
#include "Struct.h"
//========================================
//##			디파인문				##
//========================================

#define WINSTARTX   100
#define WINSTARTY   100
#define WINSIZEX	1280
#define	WINSIZEY	720
#define WINSTYLE	WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX

#define DT							CTimeManager::getInst()->GetDT();

template<typename T>
constexpr auto KEY(T vk_key) { return CKeyManager::getInst()->GetButton(vk_key);; }
#define KEYDOWN(vk_key)				CKeyManager::getInst()->GetButtonDown(vk_key);
#define KEYUP(vk_key)				CKeyManager::getInst()->GetButtonUP(vk_key);
//========================================
//## 전역변수(인스턴스, 윈도우 핸들)	##
//========================================


extern HINSTANCE hInst;
extern HWND hWnd;
static POINT pos;
static PAINTSTRUCT ps;
POINT CenterPoint(RECT& r);

//========================================
//##			그룹				##
//========================================

enum class GROUP_TYPE
{
	Default,	// 0
	Player,		// 1
	Missile,	// 2	
	Monster,	// 3

	SIZE,
};

enum class SCENE_TYPE
{
	TOOL,
	START,
	STAGE1,

	SIZE,
};