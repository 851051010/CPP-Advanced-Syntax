#include <iostream>

using namespace std;

class Emplyee
{
protected:
	char* m_name;
public:
	Emplyee(const char* name)  //没有虚构造函数
	{
		cout << "Emplyee(const char* name) :" << name << endl;
		int len = strlen(name) + 1;
		m_name = new char[len];
		strcpy_s(m_name, len, name);
	}
	// 定义虚析构函数
	virtual ~Emplyee()
	{
		cout << "~Emplyee():" << m_name << endl;
		delete[]m_name;
	}
};

class Teacher : public Emplyee
{
protected:
	char* m_course;
public:
	Teacher(const char* name, const char* course) : Emplyee(name)
	{
		cout << "Teacher(const char* name, const char* course) : Emplyee(name):" << name << endl;
		int len = strlen(course) + 1;
		m_course = new char[len];
		strcpy_s(m_course, len, course);
	}
	~Teacher()
	{	
		cout << "~Teacher():" << m_name << "  m_course:" << m_course << endl;
		delete[]m_course;
	}
};


int main()
{
	Teacher t1("张老师", "数据结构");

	/*
		通过动态分配创建子类对象，父类指针指向动态分配创建的类对象时：
		通过父类释放子类对象，
		若父类的析构函数不是虚析构函数，则只会调用父类析构函数，
		这会导致子类的资源可能没有被正确释放，造成内存泄漏。
		若父类的析构函数是虚析构函数，则会调用子类和父类的析构函数;

		只有在父类指针指向子类对像时，非虚析构函数仅调用父类析构函数。
	*/
	Emplyee* p = new Teacher("马老师","STL");
	delete p;   //只有在父类指针指向子类对像时，非虚析构函数仅调用父类析构函数。
	
	return 0;
}