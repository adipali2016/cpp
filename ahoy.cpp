#include <iostream>
using namespace std;
//Initialization List in Constructors
/*
Syntax - 
constructoe(argument) : initialization-section

{
         body
}
*/

class Test
{
    int a, b;//Declaration order matters

public:
    // Test(int i, int j) : a(i), b(a+j)
    Test(int i, int j) : b(j), a(b+i) // Attentiom Here !!!!
    {
        cout << "A"<< endl<<a<<endl<<b<< endl;
    }
};
int main()
{
    Test T(1,1);
    return 0;
}