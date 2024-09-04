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
	// 定义常成员函数getAge()
	int getAge() const
	{
		cout << "int getAge() const" << endl;
		return m_Age;
	}
	// 定义普通成员函数getAge()
	int getAge() 
	{
		cout << "int getAge()" << endl;
		return m_Age;
	}
	// 定义常函数
	void info() const
	{
	    // m_Age++;  常函数中不能修改属性的值
		// setAge(10); 不允许访问，常成员函数中只能访问常成员函数
		// 常函数中可以修改静态数据成员
		m_count++;
		// 常函数中可以调用静态成员函数
		setCount(20);
		cout << "m_age:" << getAge()   // 允许访问
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
	// 创建常对象d1
	const Dog d1(10);
	d1.info();
	d1.info();
	// 创建普通对象d2
	Dog d2(5);
	// 常对象只能访问常函数
	d1.getAge();  // int getAge() const
	// 普通对象既可以调用普通成员函数也可以调用常成员函数，但会优先调用常成员函数。
	d2.getAge();  // int getAge()
	/*
		Dog类中包含非常成员函数int getAge() 和 常成员函数 int getAge() const
		常对象会访问常成员函数：int getAge() const
		普通对象会访问普通成员函数：int getAge()
	*/

	return 0;
}