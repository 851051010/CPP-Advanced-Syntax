#include <iostream>

using namespace std;

// 基类A 
class BaseA
{
protected:
	int m_a;
	int m_c = 20;
public:
	BaseA(int a)
	{
		cout << "BaseA(int a):" << a << endl;
		m_a = a;
	}
	~BaseA()
	{
		cout << "~BaseA()"  << m_a<< endl;
	}
};

// 基类B
class BaseB
{
protected:
	int m_b;
	int m_c = 10;
public:
	BaseB(int b)
	{
		cout << "BaseA(int b):" << b << endl;
		m_b = b;
	}
	~BaseB()
	{
		cout << "~BaseB()" << m_b << endl;
	}
};

// 多继承时，基类构造函数执行顺序与继承声明的顺序有关
class Derived : BaseA, public BaseB
{
public:
	// 多继承时，基类构造函数执行顺序与初始化列表中的顺序无关
	Derived(int a, int b): BaseA(a), BaseB(b)
	{
		cout << "Derived(int a, int b): BaseA(a), BaseB(b):" << a << "  " << b << endl;
		m_a = a;
		m_b = b;
	}


	~Derived()
	{
		cout << "~Derived()	" << endl;
	}

	void info()
	{
		// 当多个父类中有同名成员时，使用 类名::成员名 访问父类中的成员。
		cout << ",  BaseA:" << BaseA::m_c << ",  BaseB:" << BaseB::m_c << endl;
		cout << "void info():" << m_a << "," << m_b << endl;
	}
};

int main()
{
	Derived derived(1, 2);
	derived.info();

	return 0;
}