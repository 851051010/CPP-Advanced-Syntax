#include <iostream>

using namespace std;

class Person
{
public:
	// 定义虚函数，父类是虚函数，子类也都会是虚函数，会遗传
	 virtual void buyTicket()
	{
		cout << "普通人买全票" << endl;
	}
};

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
	Person person;
	Student student;
	Chidren children;
	person.buyTicket();
	student.buyTicket();
	children.buyTicket();

	/*
		当父类中的方法是虚函数时，
		父类指针指向子类对象时，调用子类的方法。
		如果不是虚函数则会调用父类的方法，那样下面的结果将全是 普通人买全票
	*/
	Person* p = &person;
	p->buyTicket();   // 普通人买全票
	p = &student;  
	p->buyTicket();  // 学生买学生票
	p = &children; 
	p->buyTicket();  //	6岁以下免票

	// 定义Person类型指针数组
	Person* p1[3] = { &person, &student, &children };
	// 遍历指针数组中的元素
	for (int i = 0; i < 3; i++)
	{
		p1[i]->buyTicket();
	}

	return 0;
}