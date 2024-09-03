#include <iostream>

using namespace std;

/*
	Student没有定义拷贝构造函数，使用默认拷贝构造进行拷贝
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
	// 浅拷贝对于数组类型也会生效，stu2的m_name也被初始化为Jack
	Student stu2(stu1);
	stu2.info();
	return 0;
}