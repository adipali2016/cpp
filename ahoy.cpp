#include <iostream>
using namespace std;

class Complex
{
	int a, b;

public:
	
	Complex(int, int); 
	void printData(void)
	{
		cout << "The value of a and b is " << a << " + " << b << "i" << endl;
	}
};

Complex ::Complex(int x, int y)//Parameterised Constructor as it takes 2 parameters.
{
	a = x;
	b = y;
	// cout<<"Hello World"<<endl;
}

int main()
{
	Complex c1(11, 12);// ----Implicit Call
	c1.printData();
	Complex b = Complex(2, 1);// -----Explicit Call
	b.printData();
	return 0;
}