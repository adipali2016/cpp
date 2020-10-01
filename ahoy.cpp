#include <iostream>
#include <fstream>


/*
The useful classes for C++ are :
   1. fstreambase
   2. ifstream --> derieved from fstreambase
   3. ofstream --> derieved from fstreambase
*/

/*
    Working with files in C++, you wil have to open it, 2 ways to open -
    1. Using the constructor
    2. Using the member function open() of the class.
*/

using namespace std;
 int main()
 {
    string st;
    //Opening a file using Constructor and Wirting it.
   /*
    ofstream out("sample.txt");
    out<<a;*/

   //Opening a file using constructor and reading it.
   /*
   ifstream in("sample2.txt");
   // in>>st;
   getline(in, st);
   cout<<st<<endl;
    return 0;
    */
    
    /*
      tellg() function -- This function is present in istream class. It returns the position of the current location of the reader in the input system.
      tellp() function -- This function is present in ostream class. It returns the position of the current location of the reader in the output system.
      
      seekg() function -- This is a function in the iostream library (part of the standard library) that allows you to seek to an arbitrary position in a file.
    */
 }
