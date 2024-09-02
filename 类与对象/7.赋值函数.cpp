#include <iostream>

using namespace std;

class Circle
{
private:
	const float PI = 3.1415926;
	char* m_name;
	int m_radius;
public:
	Circle(const char* name, int radius);
	//	�����������캯��
	Circle(const Circle& circle);
	~Circle();
	//	������ֵ����
	Circle& operator=(const Circle& circle);
	void info();
};

Circle::Circle(const char* name, int radius)
{
	cout << "Circle::Circle(const char* name, int radius): " << name << endl;
	m_radius = radius;
	int len = strlen(name);
	m_name = new char[len + 1];
	strcpy_s(m_name, len + 1, name);
}

//	���忽�����캯��
Circle::Circle(const Circle& circle)
{
	cout << "Circle::Circle(const Circle& circle):" << circle.m_name << endl;
	m_radius = circle.m_radius;
	int len = strlen(circle.m_name);
	m_name = new char[len + 1];
	strcpy_s(m_name, len + 1, circle.m_name);
}

Circle::~Circle()
{
	cout << "Circle������: " << m_name << endl;
	delete[] m_name;
}

//	���帳ֵ����
Circle& Circle::operator=(const Circle& circle)
{
	cout << "Circle& Circle::operator=(const Circle& circle): " << m_name << ", " << circle.m_name << endl;
	/*
		this��������Լ����ȼ��Ҫ��ֵ���ǲ����Լ������������ֵ���������ֱ�ӷ��ء�
		��һ�������飬�������������̬�������ݣ���̬��������ݻᱻ�ͷţ��������Լ����Լ���ֵʱ�����ܵ������غ����
	*/
	if (this != &circle)
	{
		m_radius = circle.m_radius;
		delete[]m_name;
		int len = strlen(circle.m_name);
		m_name = new char[len + 1];
		strcpy_s(m_name, len + 1, circle.m_name);
	}
	//	thisָ�������
	return *this;
}

void Circle::info()
{
	cout << "���ƣ� " << m_name << " �뾶: " << m_radius << endl;
}

int main()
{

	Circle circle("C0", 3);
	Circle circle1("C11", 4);

	//	���ÿ������캯����������
	Circle circle2 = circle; //	circle2�����ڣ�����=���ÿ������캯����

	circle2.info();
	//	���ø�ֵ����
	circle2 = circle2; // circle2�����ڣ�����=���ø�ֵ������
	circle2.info();

	return 0;

}