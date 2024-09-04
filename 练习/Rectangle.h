#pragma once
#include "Graph.h"

class Rectangle : public Graph
{
private:
	int length;
	int width;
public:
	Rectangle(const Point& center,int length, int width);
	float getArea();
	float getPerimeter();
};
