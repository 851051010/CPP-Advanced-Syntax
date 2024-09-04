#include <iostream>

using namespace std;

class Children
{
public:
	// ���徲̬��������̬��������������ⲿ��ʼ��
	static int m_count;  
	// �����ж��峣����ʱ��һ��ᶨ��ɾ�̬�ģ�
	// ��Ϊpublic�ľ�̬���Կ���ֱ��ʹ����������
	// ��̬��������������ڲ���ʼ����Ҳ�������ⲿ��ʼ��
	static const int NUM = 0;  
	char m_name[20];
	Children(const char* name);
	void info();
};

Children::Children(const char* name)
{
	strcpy_s(m_name, 20, name);
	// ͳ������ഴ���˶��ٶ���
	m_count++;
}
void Children::info()
{
	cout << m_name << "  &m_count:" << &m_count
		<< "   (void*)m_name:" << (void*)m_name
		<< "  m_count:" << m_count << endl;
}

// ��̬���ݳ�Ա����������ⲿ��ʼ��
int Children::m_count = 0;

int main()
{
	// ����ͨ�������������������ֱ�ӷ���public����Ȩ�޵ľ�̬����
	Children::m_count = 10;

	Children c1("Jack");
	// �Ǿ�̬���ԣ�ֻ��ͨ��������ʡ�
	c1.m_name;
	// Ҳ����ͨ��������ʾ�̬����
	c1.m_count;
	c1.info();
	Children c2("Rose");
	/*
		��Ĳ�ͬ������ʵľ�̬���ݵ�ַ��ͬ���Ǿ�̬��Ա��ַ��ͬ��
		��̬��Ա��������ж������Ǿ�̬��Ա����ĳһ������
	*/
	c1.info();  // m_count:12
	c2.info();  // m_count:12

	return 0;
}