#include <iostream>
using namespace std;

class c2;
class c1{
	int val;
	friend void exchange(c1 &  , c2 & );
	public:
		void setval(int a){
			val = a;
		}
		void display(void){
			cout<<"The value of a is "<<val<<endl;
		}
};
class c2{
	int val;
	friend void exchange(c1 &  , c2 & );
	public:
		void setval(int a){
			val = a;
		}
		void display(void){
			cout<<"The value of b is "<<val<<endl;
		}
};

void exchange(c1 & x, c2 & y){
	int tmp = x.val;//Swapping Technique is used. by reference
	x.val = y.val;
	y.val = tmp;
}


int main(){
	c1 oc1;
	c2 oc2;

	oc1.setval(1);
	oc2.setval(2);

	oc1.display();
	oc2.display();

	exchange(oc1 , oc2);

	oc1.display();
	oc2.display();
	return 0;
}