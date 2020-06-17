#include <iostream>
using namespace std;
//Passing of Objects as Function Arguments

class complex{
	int a;
	int b;
	public:
	void setData(int v1, int v2){
		a = v1;
		b = v2;
	}

	void setDataBySum(complex o1,complex o2){
		a = o1.a + o2.a;
		b = o1.b + o2.b;
	}
	void print(void){
		cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
	}
};

int main(){
	complex c1, c2, c3;
	c1.setData(1,2);
	c1.print();
	c2.setData(2,3);
	c2.print();
	
	c3.setDataBySum(c1,c2);
	c3.print();
	
	return 0;
}