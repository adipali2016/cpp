#include <iostream>
using namespace std;
//Use of constructors in Inheritance====->
class Base1
{
    int data1;

public:
    Base1(int a)
    {
        data1 = a;
        cout << "Base1 class Constructor called" << endl;
    }
    void printData1()
    {
        cout << "The value of data is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int a)
    {
        data2 = a;
        cout << "Base2 class Constructor called" << endl;
    }
    void printData2()
    {
        cout << "The value of data is " << data2 << endl;
    }
};

class Derieved : public Base2, public Base1
{
    int der1, der2;

public:
    Derieved(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        der1 = c;
        der2 = d;
        cout << "Derieved called Constructor called " << endl;
    }
    void printDataD()
    {
        cout << "The value of Derievd1 is " << der1 << endl;
        cout << "The value of Derievd2 is " << der2 << endl;
    }
};

int main()
{
    Derieved D(1, 2, 3, 4);
    D.printData1();
    D.printData2();
    D.printDataD();

    return 0;
}