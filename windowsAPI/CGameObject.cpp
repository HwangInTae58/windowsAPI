#include "framework.h"
#include "CGameObject.h"
#include "CKeyManager.h"

CGameObject::CGameObject()
{
}


CGameObject::~CGameObject()
{
}

void CGameObject::update()
{
	if (CKeyManager::getInst()->GetButton(VK_LEFT))
	{
		m_fptPos.x -= 100.f * DT;
	}

	if (CKeyManager::getInst()->GetButton(VK_RIGHT))
	{
		m_fptPos.x += 100.f * DT;
	}

	if (CKeyManager::getInst()->GetButton(VK_UP))
	{
		m_fptPos.y -= 100.f * DT;
	}

	if (CKeyManager::getInst()->GetButton(VK_DOWN))
	{
		m_fptPos.y += 100.f * DT;
	}
}

void CGameObject::render(HDC hDC)
{

}

void CGameObject::SetPos(fPoint pos)
{
	m_fptPos = pos;
}

void CGameObject::SetScale(fPoint scale)
{
	m_fptScale = scale;
}

fPoint CGameObject::GetPos()
{
	return m_fptPos;
}

fPoint CGameObject::GetScale()
{
	return m_fptScale;
}
