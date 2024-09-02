#include <iostream>

using namespace std;

// ����A 
class BaseA
{
protected:
	int m_a;
	int m_c = 20;
public:
	BaseA(int a)
	{
		cout << "BaseA(int a):" << a << endl;
		m_a = a;
	}
	~BaseA()
	{
		cout << "~BaseA()"  << m_a<< endl;
	}
};

// ����B
class BaseB
{
protected:
	int m_b;
	int m_c = 10;
public:
	BaseB(int b)
	{
		cout << "BaseA(int b):" << b << endl;
		m_b = b;
	}
	~BaseB()
	{
		cout << "~BaseB()" << m_b << endl;
	}
};

// ��̳�ʱ�����๹�캯��ִ��˳����̳�������˳���й�
class Derived : BaseA, public BaseB
{
public:
	// ��̳�ʱ�����๹�캯��ִ��˳�����ʼ���б��е�˳���޹�
	Derived(int a, int b): BaseA(a), BaseB(b)
	{
		cout << "Derived(int a, int b): BaseA(a), BaseB(b):" << a << "  " << b << endl;
		m_a = a;
		m_b = b;
	}


	~Derived()
	{
		cout << "~Derived()	" << endl;
	}

	void info()
	{
		// �������������ͬ����Աʱ��ʹ�� ����::��Ա�� ���ʸ����еĳ�Ա��
		cout << ",  BaseA:" << BaseA::m_c << ",  BaseB:" << BaseB::m_c << endl;
		cout << "void info():" << m_a << "," << m_b << endl;
	}
};

int main()
{
	Derived derived(1, 2);
	derived.info();

	return 0;
}