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
}
void CSceneManager::init()
{
	// �� ����
	//TODO : ���� ������ �� ����°��� ��¥ �𸣰ڳ�,,,,
	m_arrScene[(int)SCENE_TYPE::START] = new StartScene;

	// ���� �� ����
	m_pCurScene = m_arrScene[(int)SCENE_TYPE::START];
}
