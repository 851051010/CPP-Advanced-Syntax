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
		// ��Ա�����Ĳ���������������ͬ��ʱ��ʹ��thisָ����������
		this->id = id;
		this->age = age;
	}

	 Teacher addStudent(const char* name)
	{
		 cout << name << "��Ϊ��ʦ" << id << "��ѧ����" << endl;
		 // ���ڷ��ض�����
		 return *this;
	}
};

int main()
{
	Teacher teacher(9527, 25);
	// ������Ը� . һֱд
	teacher.addStudent("Tom").addStudent("Rose").addStudent("mme");  
	teacher.addStudent("Jack");
	return 0;
}