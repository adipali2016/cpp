#include <iostream>
#include <stdlib.h>
using namespace std;
//Array of Objects

class Employee
{
	int id;
	int salary;

public:
	void setId(void)
	{
		salary = 10000;
		cout << "Enter the ID of Employee" << endl;
		cin >> id;
	}
	void getId(void)
	{
		cout << "The ID of Employee is " << id << endl;
	}
};

int main()
{
	// Employee bishen, tan, mallu, kasshu;
	// bishen.setId();
	// bishen.getId();
	//Intead of  ^ we can  use --> 

	Employee parivaar[4];//Array of Object
	for (int i = 0; i < 4; i++)
	{

		parivaar[i].setId();
		parivaar[i].getId();
	}

	return 0;
}