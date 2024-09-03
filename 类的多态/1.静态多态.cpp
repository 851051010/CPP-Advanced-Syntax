#include <iostream>

using namespace std;

class Cat
{
private:
	char* m_name;    // ����
	int m_full = 100;  // ������

	// ˽�к��������ڳ�ʼ������
	void init(const char* name, int full)
	{
		int len = strlen(name) + 1;
		m_name = new char[len];
		strcpy_s(m_name, len, name);
		m_full = full;
	}
public:
	// ���캯�������أ������˾�̬��̬��һ�㲻˵���캯���ľ�̬��̬��
	Cat(const char* name)
	{
		init(name, 100);
	}
	Cat(const Cat& cat)
	{
		init(cat.m_name, cat.m_full);
	}
	
	// ��������û�в�������������̬��̬��
	~Cat()
	{
		delete[]m_name;
	}

	// ��ֵ��������������������أ����ظ�ֵ�����ʹ��cat����������֮����Խ��и�ֵ���㡣
	Cat& operator=(const Cat& cat)
	{
		if (this != &cat)
		{
			delete[] m_name;
			init(cat.m_name, cat.m_full);
		}
		return *this;
	}
	void info()
	{
		cout << "name:" << m_name << "  full:" << m_full << endl;
	}
	// eat����������ڲ����������أ������˾�̬��̬
	// ��һ��ʳ��
	void eat()
	{
		m_full++;
	}
	// ��n��ʳ��
	void eat(int n)
	{
		m_full += n;
	}
	// play����������ڲ����������أ������˾�̬��̬
	// ��һ��
	void play()
	{
		m_full--;
	}
	// ��n��
	void play(int n)
	{
		m_full -= n;
	}
};

int main()
{
	// ʹ�ù��캯������cat1
	Cat cat1("Tom");
	cat1.info();
	// ʹ�ÿ������캯������cat2
	Cat cat2(cat1);
	cat2.info();
	// ʹ�ù��캯������cat3
	Cat cat3("����A��");
	cat3.info();
	// ʹ�ø�ֵ����(���������)��cat3�����Ը�ֵ��cat2
	cat2 = cat3;
	cat2.info();

	// ʹ��p1ay��eat������ɹ��ܡ�play��eat�������к�������
	cat2.play();
	cat2.info();
	cat2.play(10);
	cat2.info();
	cat2.eat();
	cat2.info();
	cat2.eat(5);
	cat2.info();

	return 0;
}