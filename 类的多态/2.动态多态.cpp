#include <iostream>

using namespace std;

class Person
{
public:
	// �����麯�����������麯��������Ҳ�������麯�������Ŵ�
	 virtual void buyTicket()
	{
		cout << "��ͨ����ȫƱ" << endl;
	}
};

class Student : public Person
{
public:
	void buyTicket()
	{
		cout << "ѧ����ѧ��Ʊ" << endl;
	}
};

class Chidren : public Person
{
public:
	void buyTicket()
	{
		cout << "6��������Ʊ" << endl;
	}
};

int main()
{
	Person person;
	Student student;
	Chidren children;
	person.buyTicket();
	student.buyTicket();
	children.buyTicket();

	/*
		�������еķ������麯��ʱ��
		����ָ��ָ���������ʱ����������ķ�����
		��������麯�������ø���ķ�������������Ľ����ȫ�� ��ͨ����ȫƱ
	*/
	Person* p = &person;
	p->buyTicket();   // ��ͨ����ȫƱ
	p = &student;  
	p->buyTicket();  // ѧ����ѧ��Ʊ
	p = &children; 
	p->buyTicket();  //	6��������Ʊ

	// ����Person����ָ������
	Person* p1[3] = { &person, &student, &children };
	// ����ָ�������е�Ԫ��
	for (int i = 0; i < 3; i++)
	{
		p1[i]->buyTicket();
	}

	return 0;
}