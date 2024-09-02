#include <iostream>

using namespace std;

class Circle
{
private:
	const float PI = 3.1415926;
	char* m_name;
	int m_radius;
public:
	// ��ͨ���캯��
	Circle(const char* name, int radius);
	// �����������캯��
	Circle(const Circle& circle);
	~Circle();
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

void Circle::info()
{
	cout << "���ƣ� " << m_name << " �뾶: " << m_radius << endl;
}

int main()
{

	Circle circle("C1", 3);

	//	���ÿ������캯����������
	Circle circle1(circle);
	//	���ÿ������캯����������
	Circle circle2 = circle; //	circle2�����ڣ�����=���ÿ������캯��

	circle.info();
	circle1.info();

	return 0;

}