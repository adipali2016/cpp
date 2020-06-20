#include <iostream>
using namespace std;
//<==============Multiple Inheritance======================>
//Syntax ---------->

// class {{Derieved}} : {{visibilty-mode}} Base 1, {{visibility-mode}} Base2
//{class body};

class Base1
{
protected:
    int base1;

public:
    void setbase1(int a)
    {
        base1 = a;
    }
};
class Base2
{
protected:
    int base2;

public:
    void setbase2(int a)
    {
        base2 = a;
    }
};
class Derieved : public Base1, public Base2
{
public:
    void Display()
    {
        cout << "The value of Base 1 is " << base1 << endl;
        cout << "The value of Base 2 is " << base2 << endl;
        cout << "The value of Sum is " << base2 + base1 << endl;
    }
};
int main()
{
    Derieved d1;
    d1.setbase1(12);
    d1.setbase2(24);
    d1.Display();
    return 0;
}