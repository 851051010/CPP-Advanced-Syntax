#pragma once
class Pet
{
protected:
	char m_name[20];
	int m_age;
public:
	// ����ʹ��const �Ϳ���ֱ�Ӵ��볣���ַ���
	Pet(const char* name, int age);
	void running();
	void barking();
};
