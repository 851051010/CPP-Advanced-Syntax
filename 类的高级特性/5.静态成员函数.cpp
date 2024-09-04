#include <iostream>

using namespace std;

class Children
{
private:
	static int m_count;
	char m_name[20];
public:
	Children(const char* name);
	// ������̬��Ա����
   	static int getCount();
	void info();
};

Children::Children(const char* name)
{
	strcpy_s(m_name, 20, name);
	// ͳ������ഴ���˶��ٶ���
	m_count++;
}

// ���徲̬��Ա����
int Children::getCount()
{
	/*
	     �ڱ����� ��̬��Ա����ֻ�ܷ��ʾ�̬���ݳ�Ա
		 cout << m_name << endl;
		 Ҳֻ�ܵ��þ�̬��Ա������
		 info();
	*/
	int a = 10; // ��̬����������ʹ�þ�̬�ı���
	return m_count;
}
void Children::info()
{
	// �Ǿ�̬������Ա���Է��ʾ�̬���ݳ�Ա
	cout << m_name << "  &m_count:" << &m_count
		<< "   (void*)m_name:" << (void*)m_name
		<< "  m_count:" << m_count << endl;
}

// ��̬���ݳ�Ա����������ⲿ��ʼ��
int Children::m_count = 0;

int main()
{
	Children c1("Jack");
	c1.info();
	/*
		��̬��Ա��������ͨ�� ����::������ ���ʣ�����Ҫ��������
		��̬��Ա����Ҳ������ĳ�������Ϸ��ʡ�
	*/
	cout << "c1.getCount():" << c1.getCount() << endl;
	cout << "Children::getCount():" << Children::getCount() << endl;

	return 0;
}