#include "Circle.h"

//  多文件组织下，静态常量成员可以在h文件中声明，
// 但是要在cpp文件中初始化
const float Circle::PI = 3.14159;

Circle::Circle(const Point& c, int radius) : Graph(c)
{
	this->radius = radius;
}

float Circle::getArea()
{
	return PI * radius * radius;
}

float Circle::getPerimeter()
{
	return PI * 2 * radius;
}