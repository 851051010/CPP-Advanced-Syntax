#include <iostream>
#include "Pet.h"

using namespace std;

Pet::Pet(const char* name, int age) {
	cout << "����" << endl;
	strcpy_s(m_name, 20, name);
	m_age = age;
}

void Pet::running() 
{
	cout << m_name << "����" << endl;
}
void Pet::barking()
{
	cout << m_name << "�ڽ�" << endl;
}
