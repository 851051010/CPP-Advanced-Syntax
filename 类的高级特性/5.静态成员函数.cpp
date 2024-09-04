#include <iostream>

using namespace std;

class Children
{
private:
	static int m_count;
	char m_name[20];
public:
	Children(const char* name);
	// 声明静态成员函数
   	static int getCount();
	void info();
};

Children::Children(const char* name)
{
	strcpy_s(m_name, 20, name);
	// 统计这个类创建了多少对象
	m_count++;
}

// 定义静态成员函数
int Children::getCount()
{
	/*
	     在本类中 静态成员函数只能访问静态数据成员
		 cout << m_name << endl;
		 也只能调用静态成员函数。
		 info();
	*/
	int a = 10; // 静态函数允许定义使用静态的变量
	return m_count;
}
void Children::info()
{
	// 非静态函数成员可以访问静态数据成员
	cout << m_name << "  &m_count:" << &m_count
		<< "   (void*)m_name:" << (void*)m_name
		<< "  m_count:" << m_count << endl;
}

// 静态数据成员必须在类的外部初始化
int Children::m_count = 0;

int main()
{
	Children c1("Jack");
	c1.info();
	/*
		静态成员函数可以通过 类名::函数名 访问，不需要创建对象。
		静态成员函数也可以在某个对象上访问。
	*/
	cout << "c1.getCount():" << c1.getCount() << endl;
	cout << "Children::getCount():" << Children::getCount() << endl;

	return 0;
}