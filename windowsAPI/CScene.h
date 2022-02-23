#pragma once


//전방선언 : 전방선언으로 컴파일이 재확인하여 꼬이는걸 막는다.
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

