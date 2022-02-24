#pragma once

//TODO : 이쪽 문제인데
class CScene;

class CSceneManager
{
private:
	SINGLETON(CSceneManager);


	CScene* m_arrScene[(int)SCENE_TYPE::Size];	//	모든 씬 목록
	CScene* m_pCurScene;						//	현제 씬 목록

public:
	CSceneManager();
	~CSceneManager();
	void init();
	void update();
	void render(HDC hDc);
};