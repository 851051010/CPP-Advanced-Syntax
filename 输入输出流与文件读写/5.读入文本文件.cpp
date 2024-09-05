#include <iostream>
#include <fstream>  // 导入iostream库后也要导入 fstream库

using namespace std;


/*
	手动创建data.txt并输入
	abcdefghi
	1
	abcde fgh
*/
int main()
{
	char c1[10], c2;
	int i;
	// 定义对象并打开文件
	ifstream myIn("D:\\data.txt");
	myIn >> c1; 
	cout << "c1:" << c1 << endl;
	myIn >> i;
	cout << "i:" << i << endl;
	// 使用提取运算符和get方法读取第三行数据, abcde fgh
	//myIn >> c1;  // 读取abcde
	//cout << "c1:" << c1 << endl;
	//myIn.get(c2);  // 读取空格
	//cout << "c2:" << c2 << endl;
	//myIn >> c1;  // 读取fgh
	//cout << "c1:" << c1 << endl;
	// 忽略换行符
	myIn.ignore();
	// 使用getline方法读取第三行数据,abcde fgh
	myIn.getline(c1, 10);
	cout << "c1:" << c1 << endl; //c1:abcde fgh
	// 关闭文件
	myIn.close();

	return 0;
}
