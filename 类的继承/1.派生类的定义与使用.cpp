#include <iostream>
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"

using namespace std;

int main()
{
	Pet pet("����",10);
	pet.barking();
	pet.running();
	// Cat��Pet������࣬Cat�̳���Pet��ȫ�����Ժͷ���
	Cat cat("Tom", 5);
	cat.running();
	cat.barking();
	// Dog��Pet�����࣬Dog���¶�����guardHouse()����
	Dog dog("����", 15);
	dog.barking();
	// Dog����ʹ���Լ���guardHouse()����
	dog.guardHouse();
	dog.running();
	return 0;
}