#include "framework.h"
#include "CGameObject.h"

CGameObject::CGameObject()
{
}


CGameObject::~CGameObject()
{
}

void CGameObject::update()
{

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
