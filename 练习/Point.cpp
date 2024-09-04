#include "Point.h"
#include <cmath>

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Point::getX() const
{
	return x;
}

void Point::setX(int x)
{
	this->x = x;
}

int Point::getY() const
{
	return y;
}

void Point::setY(int y)
{
	this->y = y;
}

float Point::getDistance(const Point& point)
{
	int x1 = pow(x - point.x, 2);
	int y1 = pow(y - point.y, 2);
	return sqrt(x1 + y1);
}