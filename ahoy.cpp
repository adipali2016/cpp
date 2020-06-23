#include <iostream>
using namespace std;
//Pointers in objects && Arrow Operators(->).
//ALternative of (*p). == p->

class Complex
{
    int real, imaginary;
    public:
    void getData()
    {
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;

    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }

};

int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    Complex * ptr = new Complex;
    // (*ptr).setData(121,111); OR --->
    ptr->setData(121,111);
    // (*ptr).getData();
    ptr->getData();

    //Array of Objects
    Complex *ptr1 = new Complex[2];
    (*ptr1).setData(1,1);
    (*ptr1).getData();
    (*(ptr1+1)).setData(4,2);
    (*(ptr1+1)).getData();
    (ptr1+2)->setData(12,11);
    (ptr1+2)->getData();
    return 0;
}
