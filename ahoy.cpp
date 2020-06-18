#include <iostream>
using namespace std;
//Constructors with Default Arguments.
class Simple
{
private:
	int data1, data2;

public:
	Simple(int a, int b = 9)
	{
		data1 = a;
		data2 = b;
	}
	void printData(void)
	{
		cout << "The value of data is " << data1 << " and " << data2 << endl;
	}
};

int main()
{

	Simple s1(1);
	s1.printData();
	return 0;
}