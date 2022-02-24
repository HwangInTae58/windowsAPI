#include "framework.h"
#include "StartScene.h"
#include "CGameObject.h"



StartScene::StartScene()
{

}

StartScene::~StartScene()
{

}

void StartScene::Enter()
{
	// object Ãß°¡
	CGameObject* pObj = new CGameObject;

	pObj->SetPos(fPoint(640.f,384.f));
	pObj->SetScale(fPoint(100.f,100.f));

	AddObject(pObj, GROUP_TYPE::Default);
	

}

void StartScene::Exit()
{

}
