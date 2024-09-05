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
	MyClass mc1(10, 10), mc2(20, 20),mc3(30,30);
	mc1.info();
	mc2.info();
	mc3.info();

	// д��mc1��mc2���������
	ofstream myOut("D:\\test1.txt", ios_base::out | ios_base::binary);
	myOut.write((char*)&mc1, sizeof(mc1));
	myOut.write((char*)&mc2, sizeof(mc2));
	myOut.close();

	// ����test1.txt�У�mc1������ֱ�Ӷ�ȡmc2������
	ifstream myIn("D:\\test1.txt", ios_base::in | ios_base::binary);
	myIn.seekg(sizeof(mc1));
	// �����ݶ���mc3
	myIn.read((char*)&mc3, sizeof(mc3));
	mc2.info();   // 10
	mc3.info();
	myIn.close();

	return 0;
}