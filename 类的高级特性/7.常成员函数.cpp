#include <iostream>

using namespace std;

class Dog
{
private:
	int m_Age;
	static int m_count;
public:
		Dog(int age)
	{
		m_Age = age;
	}
	void setAge(int age)
	{
		m_Age = age;
	}
	// ���峣��Ա����getAge()
	int getAge() const
	{
		cout << "int getAge() const" << endl;
		return m_Age;
	}
	// ������ͨ��Ա����getAge()
	int getAge() 
	{
		cout << "int getAge()" << endl;
		return m_Age;
	}
	// ���峣����
	void info() const
	{
	    // m_Age++;  �������в����޸����Ե�ֵ
		// setAge(10); ��������ʣ�����Ա������ֻ�ܷ��ʳ���Ա����
		// �������п����޸ľ�̬���ݳ�Ա
		m_count++;
		// �������п��Ե��þ�̬��Ա����
		setCount(20);
		cout << "m_age:" << getAge()   // �������
			<< "  m_count:" << m_count << endl;
	}

	static int setCount(int n)
	{
		m_count = n;
		return m_count;
	}
};

int Dog::m_count = 0;

int main()
{
	// ����������d1
	const Dog d1(10);
	d1.info();
	d1.info();
	// ������ͨ����d2
	Dog d2(5);
	// ������ֻ�ܷ��ʳ�����
	d1.getAge();  // int getAge() const
	// ��ͨ����ȿ��Ե�����ͨ��Ա����Ҳ���Ե��ó���Ա�������������ȵ��ó���Ա������
	d2.getAge();  // int getAge()
	/*
		Dog���а����ǳ���Ա����int getAge() �� ����Ա���� int getAge() const
		���������ʳ���Ա������int getAge() const
		��ͨ����������ͨ��Ա������int getAge()
	*/

	return 0;
}