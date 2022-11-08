#include<iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int Counter;
public:
    void initCounter(void)
    {
        Counter = 0;
    }
    void setData(void);
    void displayData(void);
};
void Shop :: setData(void)
{
    cout<<"Enter Id of Your Item Number "<<Counter + 1<<" : ";
    cin>>itemId[Counter];
    cout<<"Enter Price of Your Item: ";
    cin>>itemPrice[Counter];
    Counter ++;
    cout<<endl;
}
void Shop :: displayData(void)
{
    for( int i=0; i<Counter; i++)
    {
        cout<<"The Price Of Your Item With Id : "<<itemId[i]<<" is : "<<itemPrice[i]<<endl;
    }
}
int main()
{
    Shop dukaan;
    dukaan.initCounter();  //  For Counter

    dukaan.setData(); // Set the data
    dukaan.setData();
    dukaan.setData();

    dukaan.displayData(); // Display Values
    return 0;
}
