#include <iostream>

using namespace std;
class Circle
{
private:
	// ���ﳣ�������ڶ����ʱ�򲻽��г�ʼ����
    // ����ѡ���ڹ��캯����ʼ���б����ʼ����
	const float PI;   
	int m_tadius;
public:
	Circle(int radius);
	void info();
};

// Ҳ�������ұ߳�ʼ��
Circle::Circle(int radius) : m_tadius(radius), PI(3.1415926)
{
	/*
		�����������ڹ��캯���ĺ������г�ʼ�������������ڹ����б��г�ʼ����
		PI= 3.1415;������
		�����������ڹ��캯���ĺ������г�ʼ����Ҳ�����ڹ����б��г�ʼ����
		m_radius = radius ����
		
		ͨ��ֻ�ڹ����б��г�ʼ������
	*/
}

void Circle::info()
{
	cout << "�뾶��" << m_tadius << endl;
}

int main()
{
	Circle c(3);
	c.info();

	return 0;
}
