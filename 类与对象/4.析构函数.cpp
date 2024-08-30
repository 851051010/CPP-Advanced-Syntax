#include <iostream>

using namespace std;
class Circle
{
private:
	const float PI = 3.1415926;
	char* m_name;
	int m_radius;
public:
	Circle(int radius);
	Circle(const char* name, int radius);  //�����ַ���ֻ���ó���ָ����ָ
	~Circle();   // ��������
	void info();
};

Circle::Circle(int radius)
{
	m_radius = radius;
}

Circle::Circle(const char* name, int radius)
{
	cout << "Ciecle������........."<< name << endl;
	m_radius = radius;
	int len = strlen(name);
	m_name = new char[len + 1];
	strcpy_s(m_name, len + 1, name);
}

// ����������ʵ��
Circle::~Circle()
{
	cout << "Ciecle������........." << m_name << endl;
	delete[] m_name;
}

void Circle::info()
{
	cout << "���֣�"  << m_name << "  �뾶��" << m_radius << endl;
}

int main()
{
	Circle c("C1",3);
	c.info();

	Circle c1("C2", 3);   // ������������ջ

	return 0;
}
