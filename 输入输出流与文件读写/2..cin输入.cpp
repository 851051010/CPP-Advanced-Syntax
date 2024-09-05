#include <iostream>

using namespace std;

int main()
{
	char c1;
	char c2[30];
	/*
		cin 输入时，先判断缓冲区中是否有内容，如果有则直接从缓冲区中读取，如果没有则提示输入。
		cin 输入的内容，如果一次没有读完，下次不会提示输入，直接从缓冲区中读取剩下的内容。
	*/
	cin >> c1;
	cout << "c1:" << c1 << endl;
	cin >> c2;
	cout << "c2:" << c2 << endl;
	/*
		提取运算符>>会忽略换行和空格，而get不会。
		调用get前，如果需要忽略换行符，可以使用cin.ignore()忽略一个字符。
	*/
	cin.ignore();
	cin.get(c1);  // 读一个字符
	cout << "cin.get(c1):" << c1 << endl;

	// getline 读取一行
	cin.ignore();
	cin.getline(c2, 30);
	cout << "cin.getline(c2, 30):" << c2 << endl;

	return 0;
}