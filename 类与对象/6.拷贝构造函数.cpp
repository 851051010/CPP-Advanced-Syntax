#include <iostream>

using namespace std;

class Circle
{
private:
	const float PI = 3.1415926;
	char* m_name;
	int m_radius;
public:
	// 普通构造函数
	Circle(const char* name, int radius);
	// 声明拷贝构造函数
	Circle(const Circle& circle);
	~Circle();
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

void Circle::info()
{
	cout << "名称： " << m_name << " 半径: " << m_radius << endl;
}

int main()
{

	Circle circle("C1", 3);

	//	调用拷贝构造函数创建对象
	Circle circle1(circle);
	//	调用拷贝构造函数创建对象
	Circle circle2 = circle; //	circle2不存在，所以=调用拷贝构造函数

	circle.info();
	circle1.info();

	return 0;

}