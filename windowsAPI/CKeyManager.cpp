#include "CKeyManager.h"
#include "framework.h"

CKeyManager::CKeyManager()
{

}
CKeyManager::~CKeyManager()
{

}

void CKeyManager::update()
{
}

void CKeyManager::init()
{
}

bool CKeyManager::GetButton(const int key)
{
	// Ű�� ������ ���¸� true��ȯ
	return (true == m_arrPrevKey[key] && true == m_arrCurKey[key]);
}

bool CKeyManager::GetButtonDown(const int key)
{
	//Ű�� ������ ������ true��ȯ
	return (false == m_arrPrevKey[key] && true == m_arrCurKey[key]);
}

bool CKeyManager::GetButtonUp(const int key)
{
	//Ű�� �ö� ������ true��ȯ
	return (true == m_arrPrevKey[key] && false == m_arrCurKey[key]);
}
