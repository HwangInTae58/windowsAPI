#include "framework.h"
#include "CSceneManager.h"

#include "StartScene.h"


CSceneManager::CSceneManager()
{
	//현제 씬 초기화
	m_pCurScene = nullptr;
}

CSceneManager::~CSceneManager()
{
	// 씬 삭제
	for(int i = 0; i < (int)SCENE_TYPE::Size; i++)
	{
		if (nullptr != m_arrScene[i])
		{
			delete m_arrScene[i];
		}
	}
}
void CSceneManager::init()
{
	// 씬 생성
	//TODO : 여기 오류가 왜 생기는건지 진짜 모르겠네,,,,
	m_arrScene[(UINT)SCENE_TYPE::START] = new StartScene;
	m_arrScene[(UINT)SCENE_TYPE::START]->SetName(L"Start Scene");


	// 현제 씬 지정
	m_pCurScene = m_arrScene[(UINT)SCENE_TYPE::START];
	m_pCurScene->Enter();
}

void CSceneManager::update()
{
	m_pCurScene->update();
}

void CSceneManager::render(HDC hDc)
{
	m_pCurScene->render(hDc);
}
