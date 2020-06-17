#include <iostream>
using namespace std;
/* Friend Functions - 
	1.Not in the scope of class/ Not a member of class.
	2.Can't be called from the object of the respective class.
	3. Can be called without object
	4. Usually contains objects as arguments.
	5. Can be declared inside public as well as private section on the class.	
	6. It can't access the members directly by their names/ object name/member name. 	
*/ 
class complex
{
private:
	int a, b;
public:
	
	friend complex sumComlex(complex , complex);//It means that this non member function is allowed to acess my private member.

	void setNumber(int n1,int n2){
		a = n1;
		b = n2;
	}
	void printNumber(void){
		cout<<"Your Number is "<<a<<" + "<<b<<"i"<<endl;
	}

};

complex sumComlex(complex o1, complex o2){
	complex o3;
	o3.setNumber(o1.a + o2.a,o1.b+o2.b);
	return o3;
}


int main(){
	complex c1,c2,sum;
	c1.setNumber(1,4);
	c1.printNumber();	
	c2.setNumber(5,8);
	c2.printNumber();	

	sum = sumComlex(c1,c2);
	sum.printNumber();
	return 0;
}