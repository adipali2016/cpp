#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
using namespace std;
//Calculators Exercise

const double pi = 3.14259;

class SimpleCalculator //Takes input of 2 numbers and performs +, - , *, 
{
    public:
    
    float subtract(float, float);
    float multiply(float, float);
    float divide(float, float);
};


float SimpleCalculator :: subtract(float a, float b)
{
    return a-b;
}

float SimpleCalculator :: multiply(float a, float b)
{
    return a*b;
}

float SimpleCalculator :: divide(float a, float b)
{
    return a/b;
}

class ScientificCalculator //Takes input of 2 numbers and performs any 4 scientific operations.
{
    public:
    double sinefunc(double a);
    double cosfunc(double a);
    double tanfunc(double a);
    float logfunc(float a);
};

double ScientificCalculator :: sinefunc(double a)
{
    return sin(a);
}
double ScientificCalculator :: cosfunc(double a)
{
    return cos(a);
}
double ScientificCalculator :: tanfunc(double a)
{
    return tan(a);
}
float ScientificCalculator :: logfunc(float a)
{
    return log10(a);
}

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
        
};
int main()
{
    HybridCalculator h1;
    

    cout<<h1.subtract(2,4)<<endl;
    cout<<h1.multiply(2,4)<<endl;
    cout<<h1.divide(2,4)<<endl;
    cout<<h1.sinefunc(pi/6)<<endl;
    cout<<h1.cosfunc(pi/3)<<endl;
    cout<<h1.tanfunc(pi/4)<<endl;
    cout<<h1.logfunc(100)<<endl;
      
    return 0;
}

//Display Respective Results --- && use code reusability