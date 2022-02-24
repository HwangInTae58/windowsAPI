#pragma once

//TODO : ���� �����ε�
class CScene;

class CSceneManager
{
private:
	SINGLETON(CSceneManager);


	CScene* m_arrScene[(int)SCENE_TYPE::Size];	//	��� �� ���
	CScene* m_pCurScene;						//	���� �� ���

public:
	CSceneManager();
	~CSceneManager();
	void init();
	void update();
	void render(HDC hDc);
};