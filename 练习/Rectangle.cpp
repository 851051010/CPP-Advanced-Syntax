#include "Rectangle.h"

Rectangle::Rectangle(const Point& center, int length, int width) : Graph(center)
{
	this->length = length;
	this->width = width;
}

float Rectangle::getArea()
{
	return length * width;
}

float Rectangle::getPerimeter()
{
	return (length + width) * 2;
}