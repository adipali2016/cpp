#include <iostream>
using namespace std;
//Pointers -- new keyword & delete keyword+operator -- control over memory

int main()
{

    int* p = new int(4);
    cout<<"The value at adress p is "<<*p<<endl<<p<<endl<<&p<<endl;

    int * arr = new int[3];
    arr[0] = 11;
    *(arr+1) = 12;
    arr[2] = 13;
    // delete[] arr;
    cout<<"The value of arr [0] is "<<arr[0]<<endl;
    cout<<"The value of arr [1] is "<<arr[1]<<endl;
    cout<<"The value of arr [2] is "<<arr[2]<<endl;
    cout<<"The value of arr is "<<arr<<endl;
    cout<<"The value of arr is "<<&arr<<endl;

    int ar[3] = {0,1,2};
    cout<<ar[1]<<endl;
    cout<<ar<<endl;
    cout<<ar+1<<endl;

    return 0;
}
