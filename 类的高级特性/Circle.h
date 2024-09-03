#pragma once
#include "Point.h"

/*
	Circ1e 中包含 Point 类的对象center作为属性,所以可以说 Circ1e 是一个组合类，
*/
class Circle
{
private:
	const float PI = 3.14159;
	// 类的成员可以是另外一个类的对象
	Point m_center;  
	int m_radius;
public:
	Circle(Point& point, int radius);
	~Circle();
	void info();
};
