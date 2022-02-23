#pragma once


//���漱�� : ���漱������ �������� ��Ȯ���Ͽ� ���̴°� ���´�.
class CGameObject;

class CScene
{
private:

	vector<CGameObject*> m_arrvecObj[];

public:
	CScene();
	~CScene();

	virtual void update() = 0;
	virtual void render(HDC hDC);

	void Enter();
	void Exit();
};

