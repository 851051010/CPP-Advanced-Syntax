#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int n;  //a
	cin >> n;  //
	cout << "n:" << n << endl;  //n:0
	cout << "cin.fail() " << cin.fail() << endl; //cin.fail() 1
	cout << "cin.bad() " << cin.bad() << endl; //cin.bad() 0
	cout << "cin.good() " << cin.good() << endl; //cin.good() 0

	//clear()ֻ�������״̬
	cin.clear();
	// ���Ի����������쳣�������޸���
	// ��������Ի��������е��쳣���ݣ��´��쳣���ݻ��ᱻ��ȡ����
	cin.ignore();

	// ����cin��״̬�Ѿ�ͨ������c1ear()�����ָ����쳣�ַ�������a�Ѿ�ͨ������ignore0����������
	// cin������������
	cin >> n;  //2258
	cout << "n:" << n << endl; //n:2258
	cout << "cin.fail() " << cin.fail() << endl; //cin.fail() 0
	cout << "cin.bad() " << cin.bad() << endl;  //cin.bad() 0
	cout << "cin.good() " << cin.good() << endl; //cin.good() 1

	fstream myIn("D:\\test.txt");
	char c;
	while (!myIn.eof())  //ͨ��eof()�Ľ���ж��ļ��Ƿ������
	{
		myIn.get(c);
		cout << c;
	}
	myIn.close();


	return 0;
}