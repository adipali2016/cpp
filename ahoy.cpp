#include <iostream>
#include <stdlib.h>
using namespace std;
//Dynamic Initialization of Objects.
class Bank
{
    int princ;
    int year;
    float intrest;
    float returns;

public:
    Bank() //It is necesaary to declare if a blank object has to be created.
    {

    }
    Bank(int p, int y, double r);
    Bank(int p, int y, int r);
};

Bank ::Bank(int p, int y, double r)
{
    princ = p;
    year = y;
    intrest = r;
    returns = princ;
    for (int i = 0; i < year; i++)
    {
        returns = returns * (1 + intrest);
    };
    cout <<"The Value of Return " <<returns << endl;

}

Bank ::Bank(int p, int y, int r)
{
    princ = p;
    year = y;
    intrest = float(r)/100;
    returns = princ;
    for (int i = 0; i < year; i++)
    {
        returns = returns * (1 + intrest);
    };
    cout <<"The Value of Return " << returns << endl;

}

    int main()
    {
        Bank b1,b2,b3;
        int p,y,R;
        float r;
        cout<<"Enter the Principle, Years and Rate of Intrest in Decimal"<<endl;
        cin>>p>>y>>r;
        b2 = Bank(p,y,r);
        cout<<"Enter the Principle, Years and Rate of Intrest in Integer"<<endl;
        cin>>p>>y>>R;
        b1 = Bank(p,y,R);
        return 0;
    }