#include "Circle.h"

//  ���ļ���֯�£���̬������Ա������h�ļ���������
// ����Ҫ��cpp�ļ��г�ʼ��
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