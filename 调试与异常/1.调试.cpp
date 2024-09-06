#include <iostream> 

using namespace std;

int sum(int a, int b, int c);

int main()
{
	int a = 10;
	int b = 20;
	int c[5] = {};
	for (int i = 0; i < 5; i++)
	{
		c[i] = sum(a, b, i);
	}
	return 0;
}

int sum(int a, int b, int c)
{
	int tmp = a + b;
	tmp += c;
	return tmp;
}
