#include <iostream>

using namespace std;
/*
	class 是定义类的关键字，后跟类名。类名是标识符，要满足标识符命名规范。
	类名后的一对花括号表示类的作用域，也称为类体。分号表示类定义结束。
	关键字private \ protected 和 public 称为访问控制修饰符，描述类中成员的可见性。
	类中的成员函数可以在类中直接写出函数定义，也可以只写函数型（函数声明），然后在类的外部写出函数定义。
*/

// 定义Rectangle类
class Rectangle
{
// 私有成员变量
private:             
	int m_length;
	int m_width;
// 公有成员函数
public:        
	// 声明类外定义的成员函数
	void setLength(int length);
	int getLength();
	void setWidth(int width);
	int getWitdth();
	// 类内定义成员函数
	void info()
	{
		cout << "长：" << m_length << "  宽：" << m_width << endl;
	}
};

// 类外定义成员函数
void Rectangle::setLength(int length)
{
	m_length = length;
}

int Rectangle::getLength()
{
	return m_length;
}

void Rectangle::setWidth(int width)
{
	m_width = width;
}

int Rectangle::getWitdth()
{
	return m_width;
}

void Rectangle::info()
{
	cout << "长：" << m_length << "  宽：" << m_width << endl;
}

int main()
{
	// 生成 Rectangle 类的对象 r
	Rectangle r;
	// 调用成员函数setLength，修改r对象的length属性
	r.setLength(10);
	r.setWidth(2);
	r.info();
	// 不同的对象之间，属性值是独立变化的
	Rectangle r1;
	r1.setLength(3);
	r1.setWidth(4);
	r1.info();

	return 0;
}