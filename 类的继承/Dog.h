#pragma once
#include "Pet.h"

class Dog : public Pet
{
public:
	Dog(const char* name, int age);
	void guardHouse();
	void barking();
};
