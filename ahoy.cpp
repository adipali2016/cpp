#include <iostream>
#include <stdlib.h>
using namespace std;
/*Static Data Membeber Variable are property of class and all the  objects of the class share it.
 Also they are sustained till program is executed.*/
//Static Member function can access only static variables.

class Employee
{
	int id;
	static int count;

public:
	void setData(void)
	{
		cout << "Enter the Id" << endl;
		cin >> id;
		count++;
	}
	void getData(void)
	{
		cout << "The ID of Employee is " << id << " And Number of Employees are " << count << endl;
	}
	// Static Member Functions/ Methods
	static void getCount(void){
		// cnt<<id; IT will not work!
		cout<<"The value of count is "<<count<<endl;
	}
	
};

int Employee ::count; // Default Value is 0. And if it has to be changed it should be changed here(Outside class) not inside class.
//Count is the static Data Member of the Employee class
int main()
{
	Employee ayush, tan, mallu;
	ayush.setData();
	ayush.getData();
	
	Employee::getCount(); //Static Member functions are called through class Name.

	tan.setData();
	tan.getData();

	Employee::getCount();
	
	mallu.setData();
	mallu.getData();
	
	Employee::getCount();
	
	return 0;
}