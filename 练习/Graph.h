#pragma once
#include "Point.h"
//	��һ������Graph
class Graph
{
protected:
	Point center;
public:
	Graph(const Point& c);
	//	���崿�麯��
	virtual float getArea() = 0;
	virtual float getPerimeter() = 0;
	//	����ͼ��֮��ľ���
	float getDistance(const Graph& graph);
};