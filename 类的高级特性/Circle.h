#pragma once
#include "Point.h"

/*
	Circ1e �а��� Point ��Ķ���center��Ϊ����,���Կ���˵ Circ1e ��һ������࣬
*/
class Circle
{
private:
	const float PI = 3.14159;
	// ��ĳ�Ա����������һ����Ķ���
	Point m_center;  
	int m_radius;
public:
	Circle(Point& point, int radius);
	~Circle();
	void info();
};
