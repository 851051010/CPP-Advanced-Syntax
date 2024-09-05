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

	// 写入mc1和mc2对象的数据
	ofstream myOut("D:\\test1.txt", ios_base::out | ios_base::binary);
	myOut.write((char*)&mc1, sizeof(mc1));
	myOut.write((char*)&mc2, sizeof(mc2));
	myOut.close();

	// 跳过test1.txt中，mc1的数据直接读取mc2的数据
	ifstream myIn("D:\\test1.txt", ios_base::in | ios_base::binary);
	myIn.seekg(sizeof(mc1));
	// 把数据读入mc3
	myIn.read((char*)&mc3, sizeof(mc3));
	mc2.info();   // 10
	mc3.info();
	myIn.close();

	return 0;
}