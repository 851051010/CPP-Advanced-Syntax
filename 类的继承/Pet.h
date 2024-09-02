#pragma once
class Pet
{
protected:
	char m_name[20];
	int m_age;
public:
	// 这里使用const 就可以直接传入常量字符串
	Pet(const char* name, int age);
	void running();
	void barking();
};
