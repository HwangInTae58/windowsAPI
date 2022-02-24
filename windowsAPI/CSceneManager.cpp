#include "framework.h"
#include "CSceneManager.h"

#include "StartScene.h"


CSceneManager::CSceneManager()
{
	//���� �� �ʱ�ȭ
	m_pCurScene = nullptr;
}

CSceneManager::~CSceneManager()
{
	// �� ����
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
	// �� ����
	//TODO : ���� ������ �� ����°��� ��¥ �𸣰ڳ�,,,,
	m_arrScene[(UINT)SCENE_TYPE::START] = new StartScene;
	m_arrScene[(UINT)SCENE_TYPE::START]->SetName(L"Start Scene");


	// ���� �� ����
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
