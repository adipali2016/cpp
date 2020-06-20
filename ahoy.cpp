#include <iostream>
using namespace std;

class Base
{
protected:// Can Be Inherited.
    int a;
private:
    int b;
};
/* <-======================== Members Inheritance  =====================->
   _________________________________________________________________________________
                | Public Derivation    |   Private Derivation | Protected Derivation|
    Protected   |Protected             |    Private           | Protected           |
    Private     |No Inheritance        |    No Inheritance    | No Inheritance      |
    Public      |Public                |    Private           | Protected           |
   _________________________________________________________________________________|
*/
class Derieved :  Base
{
};
int main()
{
    Base b;
    Derieved d;
    cout<<"AHoy World"<<endl;
    return 0;
}