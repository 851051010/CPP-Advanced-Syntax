#include <iostream>

using namespace std;

int main()
{
	char c1;
	char c2[30];
	/*
		cin ����ʱ�����жϻ��������Ƿ������ݣ��������ֱ�Ӵӻ������ж�ȡ�����û������ʾ���롣
		cin ��������ݣ����һ��û�ж��꣬�´β�����ʾ���룬ֱ�Ӵӻ������ж�ȡʣ�µ����ݡ�
	*/
	cin >> c1;
	cout << "c1:" << c1 << endl;
	cin >> c2;
	cout << "c2:" << c2 << endl;
	/*
		��ȡ�����>>����Ի��кͿո񣬶�get���ᡣ
		����getǰ�������Ҫ���Ի��з�������ʹ��cin.ignore()����һ���ַ���
	*/
	cin.ignore();
	cin.get(c1);  // ��һ���ַ�
	cout << "cin.get(c1):" << c1 << endl;

	// getline ��ȡһ��
	cin.ignore();
	cin.getline(c2, 30);
	cout << "cin.getline(c2, 30):" << c2 << endl;

	return 0;
}