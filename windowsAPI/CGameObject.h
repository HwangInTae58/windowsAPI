#pragma once
class CGameObject
{
private:
	fPoint m_fptPos;
	fPoint m_fptScale;

public:
	CGameObject();
	~CGameObject();

	virtual void update() {};
	virtual void render(HDC hDC);

	void SetPos(fPoint pos);
	void SetScake(fPoint scsle);

	fPoint GetPos();
	fPoint GetScale();
};

