#include <iostream>

using namespace std;

class Emplyee
{
protected:
	char* m_name;
public:
	Emplyee(const char* name)  //û���鹹�캯��
	{
		cout << "Emplyee(const char* name) :" << name << endl;
		int len = strlen(name) + 1;
		m_name = new char[len];
		strcpy_s(m_name, len, name);
	}
	// ��������������
	virtual ~Emplyee()
	{
		cout << "~Emplyee():" << m_name << endl;
		delete[]m_name;
	}
};

class Teacher : public Emplyee
{
protected:
	char* m_course;
public:
	Teacher(const char* name, const char* course) : Emplyee(name)
	{
		cout << "Teacher(const char* name, const char* course) : Emplyee(name):" << name << endl;
		int len = strlen(course) + 1;
		m_course = new char[len];
		strcpy_s(m_course, len, course);
	}
	~Teacher()
	{	
		cout << "~Teacher():" << m_name << "  m_course:" << m_course << endl;
		delete[]m_course;
	}
};


int main()
{
	Teacher t1("����ʦ", "���ݽṹ");

	/*
		ͨ����̬���䴴��������󣬸���ָ��ָ��̬���䴴���������ʱ��
		ͨ�������ͷ��������
		���������������������������������ֻ����ø�������������
		��ᵼ���������Դ����û�б���ȷ�ͷţ�����ڴ�й©��
		���������������������������������������͸������������;

		ֻ���ڸ���ָ��ָ���������ʱ�������������������ø�������������
	*/
	Emplyee* p = new Teacher("����ʦ","STL");
	delete p;   //ֻ���ڸ���ָ��ָ���������ʱ�������������������ø�������������
	
	return 0;
}