#include <iostream>
using namespace std;
//<==================== Ambiguity Resolution in inheritance. =======================>

class Base1
{
    public:
    void greet()
    {
        cout<<"Ahoy, How are you?"<<endl;
	cout<<"This is to test the code on kali machine 3.0"<<endl;
    }    

};

class Base2
{
    public:
    void greet()
    {
        cout<<"Hello, How are you?"<<endl;
    }
};

class Derieved : public Base1, public Base2
{
    public:
    void greet()
    {
        Base2::greet();//Ambiguity Resolved
    }
};

class B
{
    public:
    void say()
    {
        cout<<"Hello World"<<endl;
    }
   
};
class D : public B
{
    public:
    void say()
    {
        cout<<"Ahoy World !"<<endl;
    }
    //Say will be overwritten!!! Because of Inheritance property.....
   
};

int main(){
    /* Example 1
    Base1 b1;
    Base2 b2;
    b1.greet();
    b2.greet();
    Derieved d1;
    d1.greet();
    */
   B b1;
   b1.say();
   D d1;
   d1.say();
    return 0;
}
