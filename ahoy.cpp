#include <iostream>
using namespace std;
class ShopItem
{
    int id;
    float price;
    public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout<<"The price of item Id : "<<id
            <<" is : "<<price<<endl;
    }
};

int main()
{
    ShopItem* ptr = new ShopItem[10];
    ShopItem* ptrTemp = ptr;//Necesaary for Running Second Loop
    int p;
    float q;
    for (int i = 0; i < 10; i++)
    {
        cout<<" Enter Id and Price of Item "<< i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p,q);
        ptr->setData(p,q);
        ptr++;
    }
    for (int i = 0; i < 10; i++)
    {
        ptrTemp->getData();
        ptrTemp++;
    }
    
    return 0;
}