#include <iostream>
using namespace std;
//<--==================  Constructors Intro  ==================-->
// Properties   
//It is a function and has same name as of class.   
// IT is automatically invoked when a class is created.   
// They do not have Return type and cannot return values.!   
// It can have default arguments.   
// WE cannot refer to their address.   
class Complex
{
	int a, b;

public:
	//Creating a Constructor. 
	Complex(void); //Constructor Declaration --> In public section Only <--
	void printData(void)
	{
		cout << "The value of a and b is " << a << " + " << b << "i" << endl;
	}
};

Complex ::Complex(void)// Default constructors -- as it takes no parameters/arguments.
{
	a = 10;
	b = 2;
	cout<<"Hello World"<<endl;
}

int main()
{
	Complex c1, c2, c3;
	c1.printData();
	c2.printData();
	c3.printData();
	return 0;
}