#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
	Point center(1, 1);
	Circle circle(center, 3);
	circle.info();
	return 0;
}