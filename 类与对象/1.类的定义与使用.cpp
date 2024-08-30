#include <iostream>

using namespace std;
/*
	class �Ƕ�����Ĺؼ��֣���������������Ǳ�ʶ����Ҫ�����ʶ�������淶��
	�������һ�Ի����ű�ʾ���������Ҳ��Ϊ���塣�ֺű�ʾ�ඨ�������
	�ؼ���private \ protected �� public ��Ϊ���ʿ������η����������г�Ա�Ŀɼ��ԡ�
	���еĳ�Ա��������������ֱ��д���������壬Ҳ����ֻд�����ͣ�������������Ȼ��������ⲿд���������塣
*/

// ����Rectangle��
class Rectangle
{
// ˽�г�Ա����
private:             
	int m_length;
	int m_width;
// ���г�Ա����
public:        
	// �������ⶨ��ĳ�Ա����
	void setLength(int length);
	int getLength();
	void setWidth(int width);
	int getWitdth();
	// ���ڶ����Ա����
	void info()
	{
		cout << "����" << m_length << "  ��" << m_width << endl;
	}
};

// ���ⶨ���Ա����
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
	cout << "����" << m_length << "  ��" << m_width << endl;
}

int main()
{
	// ���� Rectangle ��Ķ��� r
	Rectangle r;
	// ���ó�Ա����setLength���޸�r�����length����
	r.setLength(10);
	r.setWidth(2);
	r.info();
	// ��ͬ�Ķ���֮�䣬����ֵ�Ƕ����仯��
	Rectangle r1;
	r1.setLength(3);
	r1.setWidth(4);
	r1.info();

	return 0;
}