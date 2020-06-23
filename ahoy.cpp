#include <iostream>
using namespace std;
// this pointers
class A
{
    int a;
    public:
        // A& setData(int a)
        void setData(int a)
        {
          this->a = a;// this - is a keyword which is a pointer which points to the object which invokes the member function. In other words || (A* this) = (this)
        //   return *this;
        }
        void getData()
        {
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A b;
    // b.setData(4).getData();
    b.setData(4);
    b.getData();
    
    return 0;
}
