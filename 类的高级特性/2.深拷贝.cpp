#include <iostream>

using namespace std;

/*
	Student定义拷贝构造函数进行深拷贝
*/
class Student
{
private:
	char* m_name;
	int m_age;
public:
	// 定义构造函数
	Student(const char* name, int age)
	{
		int len = strlen(name) + 1;
		m_name = new char[len];
		strcpy_s(m_name, len, name);
		m_age = age;
	}
	// 默认的拷贝构造函数不满足要求,需要自定义拷贝构造函数，
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
	// 深拷贝
	Student stu1("Jack", 13);
	Student stu2(stu1);
	stu2.info();
	return 0;
}