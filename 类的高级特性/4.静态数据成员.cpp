#include <iostream>

using namespace std;

class Children
{
public:
	// 定义静态变量，静态变量必须在类的外部初始化
	static int m_count;  
	// 在类中定义常量的时候一般会定义成静态的，
	// 因为public的静态属性可以直接使用类名访问
	// 静态常量可以在类的内部初始化，也可以在外部初始化
	static const int NUM = 0;  
	char m_name[20];
	Children(const char* name);
	void info();
};

Children::Children(const char* name)
{
	strcpy_s(m_name, 20, name);
	// 统计这个类创建了多少对象
	m_count++;
}
void Children::info()
{
	cout << m_name << "  &m_count:" << &m_count
		<< "   (void*)m_name:" << (void*)m_name
		<< "  m_count:" << m_count << endl;
}

// 静态数据成员必须在类的外部初始化
int Children::m_count = 0;

int main()
{
	// 可以通过类名和域运算符可以直接访问public访问权限的静态属性
	Children::m_count = 10;

	Children c1("Jack");
	// 非静态属性，只能通过对象访问。
	c1.m_name;
	// 也可以通过对象访问静态属性
	c1.m_count;
	c1.info();
	Children c2("Rose");
	/*
		类的不同对象访问的静态数据地址相同，非静态成员地址不同。
		静态成员被类的所有对象共享，非静态成员属于某一个对象。
	*/
	c1.info();  // m_count:12
	c2.info();  // m_count:12

	return 0;
}