#include <iostream>
#include <fstream>  // ����iostream���ҲҪ���� fstream��

using namespace std;


/*
	�ֶ�����data.txt������
	abcdefghi
	1
	abcde fgh
*/
int main()
{
	char c1[10], c2;
	int i;
	// ������󲢴��ļ�
	ifstream myIn("D:\\data.txt");
	myIn >> c1; 
	cout << "c1:" << c1 << endl;
	myIn >> i;
	cout << "i:" << i << endl;
	// ʹ����ȡ�������get������ȡ����������, abcde fgh
	//myIn >> c1;  // ��ȡabcde
	//cout << "c1:" << c1 << endl;
	//myIn.get(c2);  // ��ȡ�ո�
	//cout << "c2:" << c2 << endl;
	//myIn >> c1;  // ��ȡfgh
	//cout << "c1:" << c1 << endl;
	// ���Ի��з�
	myIn.ignore();
	// ʹ��getline������ȡ����������,abcde fgh
	myIn.getline(c1, 10);
	cout << "c1:" << c1 << endl; //c1:abcde fgh
	// �ر��ļ�
	myIn.close();

	return 0;
}
