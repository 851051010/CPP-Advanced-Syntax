#include <iostream>

using namespace std;

class Cat
{
private:
	char* m_name;    // 名字
	int m_full = 100;  // 饥饿度

	// 私有函数，用于初始化属性
	void init(const char* name, int full)
	{
		int len = strlen(name) + 1;
		m_name = new char[len];
		strcpy_s(m_name, len, name);
		m_full = full;
	}
public:
	// 构造函数被重载，产生了静态多态（一般不说构造函数的静态多态）
	Cat(const char* name)
	{
		init(name, 100);
	}
	Cat(const Cat& cat)
	{
		init(cat.m_name, cat.m_full);
	}
	
	// 析构函数没有参数，不产生静态多态。
	~Cat()
	{
		delete[]m_name;
	}

	// 赋值函数本质上是运算符重载，重载赋值运算符使得cat的两个对象之间可以进行赋值运算。
	Cat& operator=(const Cat& cat)
	{
		if (this != &cat)
		{
			delete[] m_name;
			init(cat.m_name, cat.m_full);
		}
		return *this;
	}
	void info()
	{
		cout << "name:" << m_name << "  full:" << m_full << endl;
	}
	// eat方法在类的内部发生了重载，产生了静态多态
	// 吃一份食物
	void eat()
	{
		m_full++;
	}
	// 吃n份食物
	void eat(int n)
	{
		m_full += n;
	}
	// play方法在类的内部发生了重载，产生了静态多态
	// 玩一次
	void play()
	{
		m_full--;
	}
	// 玩n次
	void play(int n)
	{
		m_full -= n;
	}
};

int main()
{
	// 使用构造函数创建cat1
	Cat cat1("Tom");
	cat1.info();
	// 使用拷贝构造函数创建cat2
	Cat cat2(cat1);
	cat2.info();
	// 使用构造函数创建cat3
	Cat cat3("哆啦A梦");
	cat3.info();
	// 使用赋值函数(运算符重载)把cat3的属性赋值给cat2
	cat2 = cat3;
	cat2.info();

	// 使用p1ay和eat函数完成功能。play和eat函数都有函数重载
	cat2.play();
	cat2.info();
	cat2.play(10);
	cat2.info();
	cat2.eat();
	cat2.info();
	cat2.eat(5);
	cat2.info();

	return 0;
}