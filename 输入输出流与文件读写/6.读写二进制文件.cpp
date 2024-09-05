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

	// 写入二进制文件
	ofstream myOut("D:\\test1.txt", ios_base::out | ios_base::binary);
	/*
		write 的第一个参数是字符指针；
		第二个参数是长度。
		其他类型数据使用write写入文件时，必须转换成字符指针
	*/
	myOut.write((char*)&mc1, sizeof(mc1));
	myOut.close();
	
	// 读取二进制文件
	ifstream myIn("D:\\test1.txt", ios_base::in | ios_base::binary);
	/*
		read 的第一个参数是字符指针；
		第二个参数是长度。
		其他类型数据使用read读取文件时，必须转换成字符指针
	*/
	myIn.read((char*)&mc2, sizeof(mc2));
	mc2.info();   // 10
	myIn.close();

	return 0;
}