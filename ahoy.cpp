#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
//Memory Allocation - Common members have common memory & variable members have variable memory #Efficient_Management

class shop
{
	int itemId[100];
	int itemPrice[100];
	int counter;

public:
	void initcounter(void) { counter = 0; }
	void DisplayPrice(void);
	void setPrice(void);
};

void shop ::setPrice(void)
{

	cout << "Enter Id of your item no. " << counter + 1 << endl;
	cin >> itemId[counter];
	cout << "Enter Price of your item" << endl;
	cin >> itemPrice[counter];
	counter++;
}
void shop ::DisplayPrice(void)
{
	for (int i = 0; i < counter; i++)
	{
		cout << "The price of Item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
	}
}

int main()
{
	shop dukan;
	dukan.initcounter();
	dukan.setPrice();
	dukan.setPrice();
	dukan.setPrice();
	dukan.DisplayPrice();
	return 0;
}