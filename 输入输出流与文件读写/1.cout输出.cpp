#include <iostream>

using namespace std;

int main()
{

	char c[] = "C++ Programming!";

	// 使用插入运算符输出
	cout << c << endl;  //C++ Programming!
	cout << 97 << endl;  // 97
	// put 方法输出字符
	cout.put('A'); //A
	// put返回cout本身
	cout.put('\n').put(97).put('\n');  // a
	// write 输入字符串，
	// 第一个参数是要输出的字符数组,
	// 第二个参数是指定的长度
	// write也返回cout本身
	cout.write(c, 5).put('/n');  // C++ P
	cout.write(c, strlen(c)); // C++ PC++ Programming!


	return 0;
}