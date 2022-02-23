#pragma once

class CScene;

class CSceneManager
{
	SINGLETON(CSceneManager);

private:
	CScene* m_arrScene[(int)SCENE_TYPE::SIZE];	//¾À ¸ñ·Ï
	CScene* m_pCurScene;

public:
	CSceneManager();
	~CSceneManager();

	void init();

};

