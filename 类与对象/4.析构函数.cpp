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
	//常量字符串只能用常量指针来指
	Circle(const char* name, int radius); 
	~Circle();   // 析构函数
	void info();
};

Circle::Circle(int radius)
{
	m_radius = radius;
}

Circle::Circle(const char* name, int radius)
{
	cout << "Ciecle构造中........."<< name << endl;
	m_radius = radius;
	int len = strlen(name);
	m_name = new char[len + 1];
	strcpy_s(m_name, len + 1, name);
}

// 析构函数的实现
Circle::~Circle()
{
	delete[] m_name;
}

void Circle::info()
{
	cout << "名字："  << m_name << "  半径：" << m_radius << endl;
}

int main()
{
	// 先构造后析构，栈
	Circle c("C1",3);      
	c.info();
	// 后构造先析构，栈
	Circle c1("C2", 3);   
	return 0;
}
