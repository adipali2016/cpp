#include <iostream>
using namespace std;
//<==================== Single Inheritance =======================>
class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData()
{
    data1 = 11;
    data2 = 22;
}
int Base ::getData1()
{
    return data1;
}

int Base ::getData2()
{
    return data2;
}

class Derieved : public Base
{
    int data3;

public:
    void process();
    void display();
};

void Derieved ::process()
{
    data3 = data2 * getData1();
}

void Derieved ::display()
{
    cout << "value of Data 1 is " << getData1() << endl;
    cout << "value of Data 2 is " << data2 << endl;
    cout << "value of Data 3 is " << data3 << endl;
}
int main()
{
    Derieved der;
    der.setData();
    der.process();
    der.display();
    return 0;
}