#pragma once
#include "Pet.h"

class Cat : public Pet
{
public:
// 子类不会继承父类的构造函数,当父类没有无参构造函数时，子类必须定义构造函数。
	Cat(const char* name, int age);
};



