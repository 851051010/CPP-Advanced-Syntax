#include "Circle.h"
#include <iostream>

using namespace std;

/*
	��Ƕ���� m_center �� Circle �����ɲ��֣��ڴ��� Circle ����ʱ��ҲҪ���� m_center ����ʼ��
	C++ ͨ�����캯���ĳ�ʼ���б����Ƕ������г�ʼ����
	�����Ƕ����û���޲ι��캯���������ڳ�ʼ���б��ж�����г�ʼ����
	�����Ƕ�������޲ι��캯�������Բ��ڳ�ʼ���б��ж�����г�ʼ������������ʹ���޲ι��캯���������
*/
Circle::Circle(Point& point, int radius) : m_center(point.getX(),point.getY())
{
	cout << "Circle::Circle(Point& point, int radius) :" << endl;
	m_radius = radius;
}

void Circle::info()
{
	cout << "void Circle::info():(" << m_center.getX() << ", " << m_center.getY() << ")" << m_radius << endl;
}
Circle::~Circle()
{
	cout << "~Circle()" << endl;
}