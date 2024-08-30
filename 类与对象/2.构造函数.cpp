#include <iostream>

using namespace std;

class Rectangle
{
private:             
	int m_length;
	int m_width;
public:     
	//���幹�캯��
	Rectangle(int length, int width);
	void info();
	int getArea();
	void zoom(int size);
};

Rectangle::Rectangle(int length, int width)
{
	cout << "Rectangle::Rectangle()" << endl;
	m_length = length;
	m_width = width;
}

void Rectangle::info()
{
	cout << "����" << m_length << "  ��" << m_width << endl;
}

int Rectangle::getArea()
{
	return m_length * m_width;
	}

void Rectangle::zoom(int size)
{
	m_length += size;
	m_width += size;
}

int main()
{
	Rectangle r(2, 3);
	r.info();
	cout << r.getArea() << endl;

	r.zoom(10);
	r.info();

	r.zoom(-5);
	r.info();

	return 0;
}