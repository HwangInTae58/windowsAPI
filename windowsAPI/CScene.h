#pragma once
class CScene
{

public:
	CScene();
	~CScene();

	virtual void update() = 0;
	virtual void render(HDC hDC) = 0;
};

