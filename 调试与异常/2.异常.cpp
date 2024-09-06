#include <iostream> 

using namespace std;

class BaseExp
{};
class ExpX
{};

int test(int n)
{
	if (n == 1)
	{
		// throw 用于抛出异常。可以抛出任何对象
		throw "参数不能为1";
	}
	else if (n == 2)
	{
		BaseExp baseExp;
		throw baseExp;
	}
	else if (n == 3 )
	{
		ExpX e;
		throw e;
	}
	return n + 100;
}

int main()
{	
	/*
		try、catch补获并处理异常，try用于补获异常，catch用于处理对应的异常。
	*/
	try
	{
		int n;
		cin >> n;
		n = test(n);
		cout << "n:" << n << endl;
	}
	catch (const char* e)
	{
		// test的参数为1时，抛出常量字符串，被这个catch处理，因为这个catch的参数是常量字符串
		cout << "catch (const char* e) " << e << endl;
	}
	catch (BaseExp e)
	{
		// test的参数为2时，抛出BaseExp的对象，被这个catch处理，因为这个catch的参数是BaseExp的对象
		cout << "catch (BaseExp e)" << endl;
	}
	catch (...)
	{
		// 处理任意类型的异常
		cout << "catch (...)" << endl;
	}

	return 0;
}