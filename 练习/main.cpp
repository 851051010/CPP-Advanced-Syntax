#include <iostream>
#include "Point.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main()
{
	Point point1(1, 1), point2(2, 2);

	// ����������֮��ľ���
	cout << "point1.getDistance(point2):" << point1.getDistance(point2) << endl;
	
	// �������
	Rectangle rectangle(point1, 2, 3);
	// �����ܳ�
	cout << "���:" << rectangle.getArea() << endl;
	// �������
	cout << "�ܳ�:" << rectangle.getPerimeter() << endl;

	//����Բ
	Circle circle(point2, 4);
	cout << "yuan���:" << circle.getArea() << endl;

	cout << " circle.getDistance(rectangle):" << circle.getDistance(rectangle) << endl;
	return 0;
}
