#include <iostream>

using namespace std;

class A
{
private:
	int a;
public:
	void f1() {}
	void f2() {}
};

class B
{
private:
	int a;
public:
	virtual void f1() {}
	void f2() {}
};


int main()
{
	cout << sizeof(A) << endl;  // 4
	cout << sizeof(B) << endl;  // 16  ; 函数指针是8字节
	return 0;
}