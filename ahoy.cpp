#include <iostream>
using namespace std;
//Constructor Overloading

class Complex
{
	int a, b;

public:

	Complex(int x, int y)
	{
		a = x;
		b = y;
	}
	Complex(int x){
		a = x;
		b = 0;
	}
	void PrintData(void)
	{
		cout<<"Your Number is "<<a<<" + "<<b<<"i"<<endl;
	}
};

int main()
{
	Complex c1(4,6);
	Complex c2(5);
	c1.PrintData();
	c2.PrintData();
	return 0;
}