#include <iostream>
using namespace std;
//Inheritance
class Employee
{
public:
    int salary, id;
    Employee() {}
    Employee(int sal, int i)
    {
        salary = sal;
        id = i;
        cout << "The Employee Salary is " << sal << " and Id is " << i << endl;
    }
};

/* Derieved class syntax- 
    class {{derieved-class-name}} : {{visibility-mode}} {{base-class-name}}
    {
        ...members/methods/etc/
    };
*/
//Default Visibility mode is private.
//Creating a Derieved class from Employee Bas e CLass
//Private mode: Public Members of the base class becomes the private members of derieved class
//Public mode: Public Members of the base class becomes the public members of derieved class
//Private members are never inherited.

class Programmer : Employee
{
public:
    int lancode = 9;

    Programmer(int d)
    {
        id = d;
        cout <<"The Employee ID is "<< id << endl;
        cout <<"The Employee language code is "<< lancode << endl;
    }
};

int main()
{
    cout << "Ahoy World" << endl;
    Employee ayush(1, 100), tan(2, 200);
    Programmer skill(100);
    

    return 0;
}