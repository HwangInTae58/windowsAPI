#pragma once


//전방선언 : 전방선언으로 컴파일이 재확인하여 꼬이는걸 막는다.
class CGameObject;

class CScene
{
private:
	//오브젝트를 저장 및 관리할 벡터를 그룹 개수만큼 선언
	vector<CGameObject*> m_arrObj[(int)GROUP_TYPE::SIZE]; 
	// wstring : wchar_t가 string 문자열로 들어간 타입
	wstring		m_strName;	//Scene 이름
public:
	CScene();
	~CScene();
	
	void SetName(const wstring& _strName)
	{
		m_strName = _strName;
	}
	const wstring& GetName()
	{
		return m_strName;
	}

	virtual void update() = 0;
	virtual void render(HDC hDC);

	
};

