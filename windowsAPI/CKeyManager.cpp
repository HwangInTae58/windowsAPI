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
	// 키가 눌려진 상태면 true반환
	return (true == m_arrPrevKey[key] && true == m_arrCurKey[key]);
}

bool CKeyManager::GetButtonDown(const int key)
{
	//키가 눌려진 순간만 true반환
	return (false == m_arrPrevKey[key] && true == m_arrCurKey[key]);
}

bool CKeyManager::GetButtonUp(const int key)
{
	//키가 올라간 순간만 true반환
	return (true == m_arrPrevKey[key] && false == m_arrCurKey[key]);
}
