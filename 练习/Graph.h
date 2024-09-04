#pragma once
#include "Point.h"
//	定一抽象类Graph
class Graph
{
protected:
	Point center;
public:
	Graph(const Point& c);
	//	定义纯虚函数
	virtual float getArea() = 0;
	virtual float getPerimeter() = 0;
	//	计算图形之间的距离
	float getDistance(const Graph& graph);
};