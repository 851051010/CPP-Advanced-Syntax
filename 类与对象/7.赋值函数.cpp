#include <iostream>

using namespace std;

class Circle
{
private:
	const float PI = 3.1415926;
	char* m_name;
	int m_radius;
public:
	Circle(const char* name, int radius);
	//	声明拷贝构造函数
	Circle(const Circle& circle);
	~Circle();
	//	声明赋值函数
	Circle& operator=(const Circle& circle);
	void info();
};

Circle::Circle(const char* name, int radius)
{
	cout << "Circle::Circle(const char* name, int radius): " << name << endl;
	m_radius = radius;
	int len = strlen(name);
	m_name = new char[len + 1];
	strcpy_s(m_name, len + 1, name);
}

//	定义拷贝构造函数
Circle::Circle(const Circle& circle)
{
	cout << "Circle::Circle(const Circle& circle):" << circle.m_name << endl;
	m_radius = circle.m_radius;
	int len = strlen(circle.m_name);
	m_name = new char[len + 1];
	strcpy_s(m_name, len + 1, circle.m_name);
}

Circle::~Circle()
{
	cout << "Circle析构中: " << m_name << endl;
	delete[] m_name;
}

//	定义赋值函数
Circle& Circle::operator=(const Circle& circle)
{
	cout << "Circle& Circle::operator=(const Circle& circle): " << m_name << ", " << circle.m_name << endl;
	/*
		this代表对象自己，先检查要赋值的是不是自己，如果不是则赋值，如果是则直接返回。
		这一步必须检查，否则如果包含动态分配数据，动态分配的数据会被释放，当函数自己给自己赋值时，可能导致严重后果。
	*/
	if (this != &circle)
	{
		m_radius = circle.m_radius;
		delete[]m_name;
		int len = strlen(circle.m_name);
		m_name = new char[len + 1];
		strcpy_s(m_name, len + 1, circle.m_name);
	}
	//	this指向对象本身。
	return *this;
}

void Circle::info()
{
	cout << "名称： " << m_name << " 半径: " << m_radius << endl;
}

int main()
{

	Circle circle("C0", 3);
	Circle circle1("C11", 4);

	//	调用拷贝构造函数创建对象
	Circle circle2 = circle; //	circle2不存在，所以=调用拷贝构造函数。

	circle2.info();
	//	调用赋值函数
	circle2 = circle2; // circle2不存在，所以=调用赋值函数。
	circle2.info();

	return 0;

}