#include <iostream>

using namespace std;

// Person 包含纯虚函数，Person 是一个抽象类型。
class Person
{
public:
	// 定义纯虚函数
	virtual void buyTicket() = 0;  // 仅允许等于0
};

// 抽象类可以被继承
class Student : public Person
{
public:
	void buyTicket()
	{
		cout << "学生买学生票" << endl;
	}
};

class Chidren : public Person
{
public:
	void buyTicket()
	{
		cout << "6岁以下免票" << endl;
	}
};

int main()
{
	// Person person;  抽象类不能实例化。不能创建抽象类的对象
	Student student;
	Chidren children;
	student.buyTicket();
	children.buyTicket();

	/*
		可以定义抽象类的指针，指向子类的对象。
	*/
	Person* p = &student;
	p->buyTicket();
	p = &student;
	p->buyTicket();
	p = &children;
	p->buyTicket();


	return 0;
}