#include <iostream>

using namespace std;

int main()
{

	char c[] = "C++ Programming!";

	// ʹ�ò�����������
	cout << c << endl;  //C++ Programming!
	cout << 97 << endl;  // 97
	// put ��������ַ�
	cout.put('A'); //A
	// put����cout����
	cout.put('\n').put(97).put('\n');  // a
	// write �����ַ�����
	// ��һ��������Ҫ������ַ�����,
	// �ڶ���������ָ���ĳ���
	// writeҲ����cout����
	cout.write(c, 5).put('/n');  // C++ P
	cout.write(c, strlen(c)); // C++ PC++ Programming!


	return 0;
}