#include "Circle.h"
#include <iostream>

using namespace std;

/*
	内嵌对象 m_center 是 Circle 类的组成部分，在创建 Circle 对象时，也要创建 m_center 并初始化
	C++ 通过构造函数的初始化列表对内嵌对象进行初始化。
	如果内嵌对象没有无参构造函数，必须在初始化列表中对其进行初始化。
	如果内嵌对象有无参构造函数，可以不在初始化列表中对其进行初始化，编译器会使用无参构造函数构造对象。
*/
Circle::Circle(Point& point, int radius) : m_center(point.getX(),point.getY())
{
	cout << "Circle::Circle(Point& point, int radius) :" << endl;
	m_radius = radius;
}

void Circle::info()
{
	cout << "void Circle::info():(" << m_center.getX() << ", " << m_center.getY() << ")" << m_radius << endl;
}
Circle::~Circle()
{
	cout << "~Circle()" << endl;
}