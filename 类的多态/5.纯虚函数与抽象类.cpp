#include <iostream>

using namespace std;

// Person �������麯����Person ��һ���������͡�
class Person
{
public:
	// ���崿�麯��
	virtual void buyTicket() = 0;  // ���������0
};

// ��������Ա��̳�
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
	// Person person;  �����಻��ʵ���������ܴ���������Ķ���
	Student student;
	Chidren children;
	student.buyTicket();
	children.buyTicket();

	/*
		���Զ���������ָ�룬ָ������Ķ���
	*/
	Person* p = &student;
	p->buyTicket();
	p = &student;
	p->buyTicket();
	p = &children;
	p->buyTicket();


	return 0;
}