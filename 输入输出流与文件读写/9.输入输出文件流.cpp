#include <iostream>
#include <fstream>

using namespace std;

/*
	创建文件 d.txt,内容如下
	abcdefgh12345678
*/

int main()
{
	// 定义输入输出流(光标默认在最前)
	fstream myInOut("D://d.txt", ios::in | ios::out);
	myInOut.seekg(0, ios::end);
	streampos len = myInOut.tellg() ;
	cout << len << endl;
	// 申请动态分配的练习内存空间用于存放文件的内容
	int length = len;
	length += 1;
	char* c = new char[length] {};
	// 之前读指针放到了末尾，所以要把它移动回来
	myInOut.seekg(0);
	// 读取文件全部内容
	myInOut.read(c, len);
	// 也可以用for循环输出（图片在桌面）
	cout << "c:" << c << endl;

	// 移动写指针到文件未尾
	myInOut.seekp(0, ios::end);
	myInOut.write(c, len);

	delete[] c;

	myInOut.close();

	return 0;
}