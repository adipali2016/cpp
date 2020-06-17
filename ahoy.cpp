#include <iostream>
#include <stdlib.h>
using namespace std;
/*Static Data Membeber Variable are property of class and all the  objects of the class share it.
 Also they are sustained till program is executed.*/
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
	
};

int Employee ::count; // Default Value is 0. And if it has to be changed it should be changed here(Outside class) not inside class.
//Count is the static Data member of Employee class
int main()
{
	Employee ayush, tan, mallu;
	ayush.setData();
	ayush.getData();
	tan.setData();
	tan.getData();
	mallu.setData();
	mallu.getData();
	return 0;
}