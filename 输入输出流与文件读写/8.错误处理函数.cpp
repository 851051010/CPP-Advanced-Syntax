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

	//clear()只清除错误状态
	cin.clear();
	// 忽略缓冲区的中异常数据来修复流
	// 如果不忽略缓冲区的中的异常数据，下次异常数据还会被读取到，
	cin.ignore();

	// 由于cin的状态已经通过调用c1ear()方法恢复且异常字符型数据a已经通过调用ignore0方法被忽略
	// cin重新正常工作
	cin >> n;  //2258
	cout << "n:" << n << endl; //n:2258
	cout << "cin.fail() " << cin.fail() << endl; //cin.fail() 0
	cout << "cin.bad() " << cin.bad() << endl;  //cin.bad() 0
	cout << "cin.good() " << cin.good() << endl; //cin.good() 1

	fstream myIn("D:\\test.txt");
	char c;
	while (!myIn.eof())  //通过eof()的结果判断文件是否读完了
	{
		myIn.get(c);
		cout << c;
	}
	myIn.close();


	return 0;
}