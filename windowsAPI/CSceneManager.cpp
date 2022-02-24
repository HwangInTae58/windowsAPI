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
	for(UINT i = 0; i < (UINT)SCENE_TYPE::SIZE; i++)
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

	// 현제 씬 지정
	m_pCurScene = m_arrScene[(UINT)SCENE_TYPE::START];
}

void CSceneManager::update()
{
	m_pCurScene->update();
}

void CSceneManager::render(HDC hDc)
{
	m_pCurScene->render();
}
