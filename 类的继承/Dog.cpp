#include <iostream>
#include "Dog.h"

using namespace std;

Dog::Dog(const char* name, int age) : Pet(name, age)
{
	
}

void Dog::guardHouse()
{
	cout << m_name << "����" << endl;
}

void Dog::barking()
{
	cout << m_name << "ҡ��β�ͽ�" << endl;
}