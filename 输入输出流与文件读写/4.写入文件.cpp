#include <fstream>

using namespace std;

int main()
{
	// 使用默认构造函数创建输出流对象
	ofstream myOut;
	// 调用open方法打开文件，也可以指定打开方式
	myOut.open("D:\\test.txt");
	// 写入文件
	// 使用插入符写
	myOut << "Hello,MmeSweet~" << endl;
	// 使用put方法
	myOut.put('A').put('\n').put('B');
	// 使用 write 方法
	char c1[] = "\n今天是个好日子！";
	myOut.write(c1, strlen(c1));
	// 关闭文件
	myOut.close();
	
	// 使用有参构造函数，在构造函数中指定文件
	// 创建对象时指定文件，文件对象处于打开状态，不需要调用open方法
	// 加上ios::app 会保留以前的内容，也可以不加
	ofstream myOut1("D:\\test.txt",ios::app);  
	myOut1 << "TaoSweet~~" << endl;  //写入

	myOut1.close(); //关闭


	return 0;
}