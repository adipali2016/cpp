#include <iostream>
using namespace std;

class complex; //Forward Delcaration <---Declaring That Compiler will get the respective class in future.--->

//Sequence of arrangement of classes is important!
class Calculator
{
public:
	int add(int a, int b)
	{
		return a + b;
	}
	int sumReal(complex, complex);
	int sumImg(complex, complex);//Declaring only as object members aren't available yet.
};
class complex
{
private:
	int a, b;

public:
/*
<-=========================Friend Function of Other Classes===================->
//Accessing individual functions as friend.
	friend int Calculator ::sumReal(complex o1, complex o2);
	friend int Calculator ::sumImg(complex o1, complex o2);
*/
//<=========================Friend Class====================>
// Allowing whole class to access private data of present Class.
	friend class Calculator;
	void setNumber(int n1, int n2)
	{
		a = n1;
		b = n2;
	}

	void printNumber(void)
	{
		cout << "Your Number is " << a << " + " << b << "i" << endl;
	}
};
//Defining after class as object members are available here.
int Calculator ::sumReal(complex o1, complex o2)
{
	return (o1.a + o2.a);
}
int Calculator ::sumImg(complex o1, complex o2)
{
	return (o1.b + o2.b);
}

int main()
{
	complex o1, o2;
	o1.setNumber(1, 4);
	o2.setNumber(5, 7);
	Calculator calc;
	int res = calc.sumReal(o1, o2);
	cout << "The sum of real part of o1 and o2 is " << res<<endl;
	
	int res1 = calc.sumImg(o1, o2);
	cout << "The sum of Imaginary part of o1 and o2 is " << res1;
	return 0;
}