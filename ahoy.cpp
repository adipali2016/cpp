#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class binary{
	private://All members are private till specified public
	string s;
	void chk_bin(void);
	public:
		void read(void);
		
		void ones(void);
		void display(void);
};
void binary :: read(void){
	cout<<"Enter a Binary Number"<<endl;
	cin>>s;
	chk_bin();//Member Nesting
}
void binary :: chk_bin(void){
	for (int i = 0; i < s.length(); i++)
	{
		if (s.at(i)!='0' && s.at(i)!='1'){
			cout<<endl<<"This is not Binary"<<endl;
			exit(0);//Use stdlib.h for this, It will terminate the whole programme.
		}
	}
	
}
void binary :: ones(void){
	
	for (int i = 0; i < s.length(); i++)
	{
		if (s.at(i)=='0'){
			s.at(i)='1';
		}
		 else {
			s.at(i)='0';
		}
		

	}
	
}
void binary :: display(void){
	cout<<endl<<"Displaying Numbers"<<endl;
	for (int i = 0; i < s.length(); i++)
	{
		cout<<s.at(i);
		
	}
	
}

int main(){
	binary b;
	b.read();
	// b.chk_bin(); It can't be called
	b.display();
	b.ones();
	b.display();

	return 0;
}