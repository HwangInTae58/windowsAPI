#pragma once

//���� ����� ������ �ƴ϶� ����� ����
//���漱�� : ���漱������ �������� ��Ȯ���Ͽ� ���̴°� ���´�.
class CGameObject;

class CScene
{
private:
	//������Ʈ�� ���� �� ������ ���͸� �׷� ������ŭ ����
	vector<CGameObject*> m_arrObj[(UINT)GROUP_TYPE::SIZE];
	// wstring : wchar_t�� string ���ڿ��� �� Ÿ��
	wstring		m_strName;	//Scene �̸�
public:
	CScene();
	// �Ҹ��ڸ� �ڽļҸ��ں��� �ҷ��� �Ǵµ� �����Լ� �Ⱥ��̸� �θ�Ҹ��ڸ� �θ���
	virtual ~CScene()=0;
	
	void SetName(const wstring& _strName)
	{
		m_strName = _strName;
	}
	const wstring& GetName()
	{
		return m_strName;
	}
	
};

