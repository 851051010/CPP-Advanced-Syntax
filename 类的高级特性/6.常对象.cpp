#include <iostream>

using namespace std;

class Dog
{
public:
	int m_Age;
	Dog(int age)
	{
		m_Age = age;
	}
	// ���峣����
	void info() const
	{
		cout << "m_age:" << m_Age << endl;
	}
};

int main()
{
	// ���峣����
	const Dog d1(10);
	/*  ����������Բ����޸�
	   	d1.m_Age = 1000;
		�������ϲ��ܵ��÷ǳ�����
	*/
	// ��������ֻ�ܵ��ó�����
	d1.info();
	cout << d1.m_Age << endl;
	return 0;
}