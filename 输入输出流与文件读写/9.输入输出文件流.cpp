#include <iostream>
#include <fstream>

using namespace std;

/*
	�����ļ� d.txt,��������
	abcdefgh12345678
*/

int main()
{
	// �������������(���Ĭ������ǰ)
	fstream myInOut("D://d.txt", ios::in | ios::out);
	myInOut.seekg(0, ios::end);
	streampos len = myInOut.tellg() ;
	cout << len << endl;
	// ���붯̬�������ϰ�ڴ�ռ����ڴ���ļ�������
	int length = len;
	length += 1;
	char* c = new char[length] {};
	// ֮ǰ��ָ��ŵ���ĩβ������Ҫ�����ƶ�����
	myInOut.seekg(0);
	// ��ȡ�ļ�ȫ������
	myInOut.read(c, len);
	// Ҳ������forѭ�������ͼƬ�����棩
	cout << "c:" << c << endl;

	// �ƶ�дָ�뵽�ļ�δβ
	myInOut.seekp(0, ios::end);
	myInOut.write(c, len);

	delete[] c;

	myInOut.close();

	return 0;
}