#include <iostream>

using namespace std;

/*
	Studentû�ж��忽�����캯����ʹ��Ĭ�Ͽ���������п���
*/
class Student
{
private:
	char m_name[20];
	int m_age;
public:
	Student(const char* name, int age)
	{
		strcpy_s(m_name, 20, name);
		m_age = age;
	}
	void info()
	{
		cout << m_name << " " << m_age << endl;
	}
};

int main()
{
	Student stu1("Jack", 13);
	// ǳ����������������Ҳ����Ч��stu2��m_nameҲ����ʼ��ΪJack
	Student stu2(stu1);
	stu2.info();
	return 0;
}