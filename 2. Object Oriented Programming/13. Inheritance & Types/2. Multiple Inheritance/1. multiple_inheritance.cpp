#include<iostream>
using namespace std;

class A
{
protected :
    int a;
public :
    void getData()
    {
        cout<<"Enter Number1 : ";
        cin>>a;
    }
};
class B
{
protected :
    int b;
public:
    void setData()
    {
        cout<<"Enter Number2 : ";
        cin>>b;cout<<endl;
    }
};
class C : public A, public B
{
    int sum;
public:
    void display()
    {
        sum = a+b;
        cout<<"Addition is : "<<sum<<endl;
    }
};
int main()
{
    C sum;
    sum.getData();
    sum.setData();
    sum.display();
    return 0;
}
