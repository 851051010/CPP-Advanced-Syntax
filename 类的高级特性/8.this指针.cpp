#include <iostream>

using namespace std;

class Teacher
{
private:
	int id;
	int age;
public:
	Teacher(int id, int age)
	{
		// 成员函数的参数变量名和属性同名时，使用this指向属性名。
		this->id = id;
		this->age = age;
	}

	 Teacher addStudent(const char* name)
	{
		 cout << name << "成为老师" << id << "的学生。" << endl;
		 // 用于返回对象本身
		 return *this;
	}
};

int main()
{
	Teacher teacher(9527, 25);
	// 后面可以跟 . 一直写
	teacher.addStudent("Tom").addStudent("Rose").addStudent("mme");  
	teacher.addStudent("Jack");
	return 0;
}