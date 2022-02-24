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
	// �� ����
	//TODO : ���� ������ �� ����°��� ��¥ �𸣰ڳ�,,,,
	m_arrScene[(UINT)SCENE_TYPE::START] = new StartScene;

	// ���� �� ����
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
