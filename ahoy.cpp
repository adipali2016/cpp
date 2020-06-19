#include <iostream>
using namespace std;
//Copy Constructors
//======> All Compilers automatically creates Copy COnstructors if no constructor is found!!
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }//Default COnstructors - Must!
    Number(int num)
    {
        a = num;
    }

    Number(Number &obj)//Copy Constructor - Not Necessary to create - Read Header comment.
    {
        cout<<"Copy constructor called!!!"<<endl;
        a = obj.a;
    }

    void Display(void)
    {
        cout << "The Number is " << a << endl;
    }
};

int main()
{
    Number x,y,z(11),z2;
    x.Display();
    y.Display();
    z.Display();
    // z1(copy constructors) - It should exactly resemble like other objects eg. x or y or z.
    Number z1(z);
    z1.Display();
    // (if) z2 = z; It won't invoke copy constructor.Because z2 object was predefined.
    // (if) Number z3 = z; It will invoke copy constructor as Object was simultaneously defined and assigned.
    return 0;
}