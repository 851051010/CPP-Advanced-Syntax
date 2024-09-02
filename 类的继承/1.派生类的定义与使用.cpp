#include <iostream>
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"

using namespace std;

int main()
{
	Pet pet("大熊",10);
	pet.barking();
	pet.running();
	// Cat是Pet类的子类，Cat继承了Pet的全部属性和方法
	Cat cat("Tom", 5);
	cat.running();
	cat.barking();
	// Dog是Pet的子类，Dog中新定义了guardHouse()方法
	Dog dog("旺财", 15);
	dog.barking();
	// Dog可以使用自己的guardHouse()方法
	dog.guardHouse();
	dog.running();
	return 0;
}