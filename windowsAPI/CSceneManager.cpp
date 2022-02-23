#include "framework.h"
#include "CSceneManager.h"
#include "StartScene.h"
#include "CScene.h"



CSceneManager::CSceneManager()
{
	//���� �� �ʱ�ȭ
	m_pCurScene = nullptr;
}

CSceneManager::~CSceneManager()
{
	// �� ����
}

void CSceneManager::init()
{
	// �� ����
	m_arrScene[(int)SCENE_TYPE::START] = new StartScene;

	// ���� �� ����
	m_pCurScene = m_arrScene[(int)SCENE_TYPE::START];
}
