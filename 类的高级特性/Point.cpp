#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(int x, int y)
{
	cout << "Point::Point(int x, int y):" << x << "," << y << endl;
	m_x = x;
	m_y = y;
}
Point::~Point()
{
	cout << "~Point()" << endl;
}

int Point::getX()
{
	return m_x;
}

int Point::getY()
{
	return m_y;
}