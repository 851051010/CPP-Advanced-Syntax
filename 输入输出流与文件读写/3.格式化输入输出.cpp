#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// ��������Ŀ��
	cout << "1234567890" << endl;  //1234567890
	// �����Ʒ�
	cout << setw(6) << 5.5 << endl; //   5.5
	cout << 5.5 << endl; // 5.5
	// ��Ա����
	cout.width(6);
	cout << 5.5 << endl;  //   5.5

	// ����ַ�
	cout << setfill('#');
	cout << setw(6) << 5.5 << endl; //###5.5
	cout << setw(4) << 5.5 << endl; //#5.5
	// ��Ա����
	char c = cout.fill('*');  // ��Ա�������Է��ص�ǰ����ַ� #
	cout << setw(6) << 5.5 << endl; //***5.5
	cout << setw(4) << 5.5 << endl; //*5.5
	cout.fill(c);  // �Ļ�ԭ��������ַ�
	cout << setw(6) << 5.5 << endl; //###5.5
	cout << setw(4) << 5.5 << endl; //#5.5

	// �����������
	double PI = 3.141592653;
	// �����Ʒ�
	// �����8�����֣�С���㲻��
	cout << setprecision(8) << endl;  
	cout << PI << endl;

	int len = cout.precision(11);
	// ��Ա�������Է��ص�ǰ�ľ���
	cout << "len:" << len << endl;  // 8 ,��Ϊ����������8
	cout << PI << endl;

	int n = 100;
	cout << "ʮ�����ƣ�" << hex << n << endl;  //64
	cout << "�˽��ƣ�" << oct << n << endl;  //144
	cout << "�˽��ƣ�" << 200 << endl; //310
	cout << "ʮ���ƣ�" << dec << 200 << endl; //200

	return 0;
}