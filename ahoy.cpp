#include <iostream>
using namespace std;
//Destructors - Never takes argument and never return values.
//When Compiler realizes that there is no need of objects, it destroys it. 
int count = 0;
class num
{
private:
    
public:
    num(){
        count++;
        cout<<"This is a time when constructor is called for Object Number "<<count<<endl;
    }

    ~num(){
        cout<<"Destructor called for object number "<<count--<<endl;
    }
    
};


int main(){
    cout<<"We are inside our main function."<<endl;
    cout<<"Creating 1st object  n1"<<endl;
    num n1;
    {
        cout<<"Entering this block."<<endl;
        cout<<"Creating 2 more Objects "<<endl;
        num n2,n3;
        
        
    }
    cout<<"Back to main"<<endl;
    return 0;
}