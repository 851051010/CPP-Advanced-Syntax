#pragma once
class Point
{
private:
	int x;
	int y;
public:
	// ���幹�캯��
	Point(int x, int y);
	// ���峣����
	int getX() const;
	// ������ͨ����
	void setX(int x);
	int getY() const;
	void setY(int x);
	float getDistance(const Point& point);
};
