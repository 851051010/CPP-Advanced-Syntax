#pragma once
#include "Graph.h"

class Circle : public Graph
{
private:
	int radius;
	static const float PI;
public:
	Circle(const Point& c, int radius);
	float getArea();
	float getPerimeter();
};


