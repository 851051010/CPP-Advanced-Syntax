#include <iostream>

using namespace std;
class Circle
{
private:
	// 这里常量可以在定义的时候不进行初始化，
    // 可以选择在构造函数初始化列表里初始化。
	const float PI;   
	int m_tadius;
public:
	Circle(int radius);
	void info();
};

// 也可以在右边初始化
Circle::Circle(int radius) : m_tadius(radius), PI(3.1415926)
{
	/*
		常量不允许在构造函数的函数体中初始化，但是允许在构造列表中初始化。
		PI= 3.1415;不允许
		变量不允许在构造函数的函数体中初始化，也允许在构造列表中初始化。
		m_radius = radius 允许
		
		通常只在构造列表中初始化常量
	*/
}

void Circle::info()
{
	cout << "半径：" << m_tadius << endl;
}

int main()
{
	Circle c(3);
	c.info();

	return 0;
}
