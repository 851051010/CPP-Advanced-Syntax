#include <iostream>

using namespace std;

/*
	Student���忽�����캯���������
*/
class Student
{
private:
	char* m_name;
	int m_age;
public:
	// ���幹�캯��
	Student(const char* name, int age)
	{
		int len = strlen(name) + 1;
		m_name = new char[len];
		strcpy_s(m_name, len, name);
		m_age = age;
	}
	// Ĭ�ϵĿ������캯��������Ҫ��,��Ҫ�Զ��忽�����캯����
	Student(const Student& student)
	{
		int len = strlen(student.m_name) + 1;
		m_name = new char[len];
		strcpy_s(m_name, len, student.m_name);
		m_age = student.m_age;
	}

	~Student()
	{
		delete[] m_name;
	}
	void info()
	{
		cout << m_name << " " << m_age << endl;
	}
};

int main()
{
	// ���
	Student stu1("Jack", 13);
	Student stu2(stu1);
	stu2.info();
	return 0;
}