#include <iostream>

using namespace std;

class Animal
{
protected:
	char m_type[20];
public:
	Animal(const char* type)
	{
		cout << "Animal(const char* type):" << type << endl;
		strcpy_s(m_type, 20, type);
	}
	~Animal()
	{
		cout << "~Animal()" << endl;
	}
};

class Tiger : public Animal
{
private:
	int m_weight;
public:
	Tiger(const char* type, int weight) : Animal(type)
	{
		cout << "Tiger(const char* type, int weight) : Animal(type)  " << type << "   weight:" << weight << endl;
		m_weight = weight;
	}
	~Tiger()
	{
		cout << "~Tiger()" << endl;
	}
};

int main()
{
	Tiger tiger("ÀÏ»¢", 200);
	return 0;
}