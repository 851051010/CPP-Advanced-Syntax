#include <iostream>
#include "Dog.h"

using namespace std;

Dog::Dog(const char* name, int age) : Pet(name, age)
{
	
}

void Dog::guardHouse()
{
	cout << m_name << "¿´ÃÅ" << endl;
}

void Dog::barking()
{
	cout << m_name << "Ò¡×ÅÎ²°Í½Ð" << endl;
}