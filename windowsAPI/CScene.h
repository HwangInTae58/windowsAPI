#pragma once

//씬은 사용이 목적이 아니라 상속이 목적
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
	// 소멸자를 자식소멸자부터 불러야 되는데 가상함수 안붙이면 부모소멸자를 부른다
	virtual ~CScene()=0;
	
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

