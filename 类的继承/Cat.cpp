#include <iostream>
#include "Cat.h"

using namespace std;

/*
	���๹�캯��ִ��ǰ������ִ�и��๹�캯����
	������û���޲ι��캯��ʱ�����������๹�캯����ʼ���б��е���һ�����๹�캯����
*/
Cat::Cat(const char* name, int age) : Pet(name, age)
{
	cout << "����" << endl;
}
