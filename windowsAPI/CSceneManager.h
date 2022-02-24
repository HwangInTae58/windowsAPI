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
	void update();
	void render(HDC hDC);
	void init();

	CScene* GetCurScene();							//현재 씬 반환
};