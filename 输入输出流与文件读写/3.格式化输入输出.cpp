#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// 控制输出的宽度
	cout << "1234567890" << endl;  //1234567890
	// 流控制符
	cout << setw(6) << 5.5 << endl; //   5.5
	cout << 5.5 << endl; // 5.5
	// 成员函数
	cout.width(6);
	cout << 5.5 << endl;  //   5.5

	// 填充字符
	cout << setfill('#');
	cout << setw(6) << 5.5 << endl; //###5.5
	cout << setw(4) << 5.5 << endl; //#5.5
	// 成员函数
	char c = cout.fill('*');  // 成员函数可以返回当前填充字符 #
	cout << setw(6) << 5.5 << endl; //***5.5
	cout << setw(4) << 5.5 << endl; //*5.5
	cout.fill(c);  // 改回原来的填充字符
	cout << setw(6) << 5.5 << endl; //###5.5
	cout << setw(4) << 5.5 << endl; //#5.5

	// 设置输出精度
	double PI = 3.141592653;
	// 流控制符
	// 会输出8个数字，小数点不算
	cout << setprecision(8) << endl;  
	cout << PI << endl;

	int len = cout.precision(11);
	// 戊员函数可以返回当前的精度
	cout << "len:" << len << endl;  // 8 ,因为上面设置了8
	cout << PI << endl;

	int n = 100;
	cout << "十六进制：" << hex << n << endl;  //64
	cout << "八进制：" << oct << n << endl;  //144
	cout << "八进制：" << 200 << endl; //310
	cout << "十进制：" << dec << 200 << endl; //200

	return 0;
}