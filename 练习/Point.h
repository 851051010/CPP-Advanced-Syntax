#pragma once
class Point
{
private:
	int x;
	int y;
public:
	// 定义构造函数
	Point(int x, int y);
	// 定义常函数
	int getX() const;
	// 定义普通函数
	void setX(int x);
	int getY() const;
	void setY(int x);
	float getDistance(const Point& point);
};
