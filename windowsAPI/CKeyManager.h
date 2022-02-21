#pragma once
class CKeyManager
{
	SINGLETON(CKeyManager);
private:
	bool m_arrPrevKey[/*Ű�� ����*/]; //���� Ű�� �Է»��¸� ����
	bool m_arrCurKey[/*Ű�� ����*/];  //���� Ű�� �Է»��¸� ������ �迭
public:
	void update();
	void init();

	bool GetButton(const int key);		// Ű�� ������ ���¸� true��ȯ
	bool GetButtonDown(const int key);	//Ű�� ������ ������ true��ȯ
	bool GetButtonUp(const int key);	//Ű�� �ö� ������ true��ȯ
};

