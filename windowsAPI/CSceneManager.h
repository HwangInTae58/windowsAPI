#pragma once

class CScene;

class CSceneManager
{
	SINGLETON(CSceneManager);

private:
	CScene* m_arrScene[(UINT)SCENE_TYPE::SIZE];	//¾À ¸ñ·Ï
	CScene* m_pCurScene;

public:
	CSceneManager();
	virtual ~CSceneManager();
	void init();
	void update();
	void render(HDC hDc);
};
