#include <iostream>
#include <fstream>

using namespace std;

class MyClass
{
private:
	int length;
	int width;
public:
	MyClass(int length, int width)
	{
		this->length = length;
		this->width = width;
	}
	void info()
	{
		cout << "info:" << length << "  " << width << endl;
	}
};

int main()
{
	MyClass mc1(10, 10), mc2(20, 20);
	mc1.info();
	mc2.info();

	// д��������ļ�
	ofstream myOut("D:\\test1.txt", ios_base::out | ios_base::binary);
	/*
		write �ĵ�һ���������ַ�ָ�룻
		�ڶ��������ǳ��ȡ�
		������������ʹ��writeд���ļ�ʱ������ת�����ַ�ָ��
	*/
	myOut.write((char*)&mc1, sizeof(mc1));
	myOut.close();
	
	// ��ȡ�������ļ�
	ifstream myIn("D:\\test1.txt", ios_base::in | ios_base::binary);
	/*
		read �ĵ�һ���������ַ�ָ�룻
		�ڶ��������ǳ��ȡ�
		������������ʹ��read��ȡ�ļ�ʱ������ת�����ַ�ָ��
	*/
	myIn.read((char*)&mc2, sizeof(mc2));
	mc2.info();   // 10
	myIn.close();

	return 0;
}