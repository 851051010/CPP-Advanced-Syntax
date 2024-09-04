#include <iostream>
#include "Point.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main()
{
	Point point1(1, 1), point2(2, 2);

	// 计算两个点之间的距离
	cout << "point1.getDistance(point2):" << point1.getDistance(point2) << endl;
	
	// 定义矩形
	Rectangle rectangle(point1, 2, 3);
	// 计算周长
	cout << "面积:" << rectangle.getArea() << endl;
	// 计算面积
	cout << "周长:" << rectangle.getPerimeter() << endl;

	//定义圆
	Circle circle(point2, 4);
	cout << "yuan面积:" << circle.getArea() << endl;

	cout << " circle.getDistance(rectangle):" << circle.getDistance(rectangle) << endl;
	return 0;
}
