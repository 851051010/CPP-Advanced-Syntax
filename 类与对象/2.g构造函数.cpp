#include <iostream>

using namespace std;

class Rectangle
{
private:             
	int m_length;
	int m_width;
public:     
	Rectangle(int length, int width);
	void setLength(int length);
	int getLength();
	void setWidth(int width);
	int getWitdth();
	void info();
	int getArea();
};

Rectangle::Rectangle(int length, int width)
{
	m_length = length;
	m_width = width;
}

void Rectangle::setLength(int length)
{
	m_length = length;
}

int Rectangle::getLength()
{
	return m_length;
}

void Rectangle::setWidth(int width)
{
	m_width = width;
}

int Rectangle::getWitdth()
{
	return m_width;
}

void Rectangle::info()
{
	cout << "³¤£º" << m_length << "  ¿í£º" << m_width << endl;
}

int Rectangle::getArea()
{
	return m_length * m_width;
	}

int main()
{
	Rectangle r(2, 3);
	r.info();
	cout << r.getArea() << endl;

	return 0;
}