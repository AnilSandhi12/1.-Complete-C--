#include<iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;
public:
    void setData(int a, float b)
    {
        id=a;
        price=b;
    }
    void getData()
    {
        cout<<"Code of This Item is : "<<id<<endl;
        cout<<"Price of This Item is : "<<price<<endl;
    }
};
int main()
{
    int Size=3;
    /*
     1. General Store Item
     2. Veggies Item
     3. Hardware Item
    */
    ShopItem *ptr= new ShopItem[Size];
    ShopItem *ptrTemp= ptr;
    int p;
    float q;
    for(int i=0;i<Size;i++){
        cout<<"Enter Id and Price of Item : "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for(int i=0;i<Size;i++){
        cout<<"Item Number : "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}
