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
	// 定义常函数
	void info() const
	{
		cout << "m_age:" << m_Age << endl;
	}
};

int main()
{
	// 定义常对象
	const Dog d1(10);
	/*  常对象的属性不能修改
	   	d1.m_Age = 1000;
		常对象上不能调用非常方法
	*/
	// 常对象上只能调用常函数
	d1.info();
	cout << d1.m_Age << endl;
	return 0;
}