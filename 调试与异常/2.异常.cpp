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
		// throw �����׳��쳣�������׳��κζ���
		throw "��������Ϊ1";
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
		try��catch���񲢴����쳣��try���ڲ����쳣��catch���ڴ����Ӧ���쳣��
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
		// test�Ĳ���Ϊ1ʱ���׳������ַ����������catch������Ϊ���catch�Ĳ����ǳ����ַ���
		cout << "catch (const char* e) " << e << endl;
	}
	catch (BaseExp e)
	{
		// test�Ĳ���Ϊ2ʱ���׳�BaseExp�Ķ��󣬱����catch������Ϊ���catch�Ĳ�����BaseExp�Ķ���
		cout << "catch (BaseExp e)" << endl;
	}
	catch (...)
	{
		// �����������͵��쳣
		cout << "catch (...)" << endl;
	}

	return 0;
}