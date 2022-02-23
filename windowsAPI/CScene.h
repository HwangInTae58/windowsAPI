#pragma once


//���漱�� : ���漱������ �������� ��Ȯ���Ͽ� ���̴°� ���´�.
class CGameObject;

class CScene
{
private:
	//������Ʈ�� ���� �� ������ ���͸� �׷� ������ŭ ����
	vector<CGameObject*> m_arrObj[(int)GROUP_TYPE::SIZE]; 
	// wstring : wchar_t�� string ���ڿ��� �� Ÿ��
	wstring		m_strName;	//Scene �̸�
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

