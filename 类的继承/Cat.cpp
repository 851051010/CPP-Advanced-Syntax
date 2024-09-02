#include <iostream>
#include "Cat.h"

using namespace std;

/*
	子类构造函数执行前必须先执行父类构造函数。
	当父类没有无参构造函数时，必须在子类构造函数初始化列表中调用一个父类构造函数。
*/
Cat::Cat(const char* name, int age) : Pet(name, age)
{
	cout << "子类" << endl;
}
