#include "framework.h"
#include "CCore.h"
#include "CScene.h"

#define CHAR_X_LEN 20
#define CHAR_Y_LEN 20

CCore::CCore()
{
	// ���� ȭ���� �׸��� ���� DC �ڵ鰪 �ʱ�ȭ
	m_hDC = 0;
	m_hMemDC = 0;
	m_hBMP = 0;
}

CCore::~CCore()
{
	// ���� �ھ� ���� ������ DC �ڵ鰪 �ݳ�
	ReleaseDC(hWnd, m_hDC);
	DeleteObject(m_hMemDC);
	DeleteObject(m_hBMP);
}

void CCore::update()
{
	CTimeManager::getInst()->update();
	CKeyManager::getInst()->update();
	CSceneManager

	if (KEY(VK_LEFT))
	{
		pos.x -= 3 * DT;
	}

	if (KEY(VK_RIGHT))
	{
		pos.x += 3 * DT;
	}

	if (KEY(VK_UP))
	{
		pos.y += 3 * DT;
	}

	if (KEY(VK_DOWN))
	{
		pos.y -= 3 * DT;
	}
}
	   

void CCore::render()
{
	Ellipse(m_hMemDC, 50 , 50  , 10 , 10 );
	
	// memDC�� �׸� �۾��� �ٽ� ������ DC�� ����
	BitBlt(m_hDC, 0, 0, WINSIZEX, WINSIZEY, m_hMemDC, 0, 0, SRCCOPY);
	
}

void CCore::init()
{
	// ���� �ʱ�ȭ �۾� ����
	CTimeManager::getInst()->init();
	CKeyManager::getInst()->init();
	// ���� �������� DC �ڵ鰪 ��������
	m_hDC = GetDC(hWnd);

	// ���� ���۸��� �޸� DC�� ��Ʈ�� ����
	m_hMemDC = CreateCompatibleDC(m_hDC);
	m_hBMP = CreateCompatibleBitmap(m_hDC, WINSIZEX, WINSIZEY);

	HBITMAP hOldBitmap = (HBITMAP)SelectObject(m_hMemDC, m_hBMP);
	DeleteObject(hOldBitmap);
}
