#pragma once
class Point
{
private:
	int m_x;
	int m_y;
public:
	Point(int x, int y);
	int getX();
	int getY();
	~Point();
};
