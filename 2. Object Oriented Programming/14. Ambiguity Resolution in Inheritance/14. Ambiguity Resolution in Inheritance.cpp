#include<iostream>
using namespace std;
// -------------------------------------------------------  Ambiguity Resolution in Inheritance -----------------------------------------------------------

class A
{
protected:
    int a;
public:
    void input()
    {
        cout<<"Enter Value of A : ";
        cin>>a;
    }
    void output()
    {
        cout<<"Value of A is : "<<a<<endl;
    }
};

class B
{
protected:
    int b;
public:
    void input()
    {
        cout<<"Enter Value of B: ";
        cin>>b;
    }
    void display()
    {
        cout<<"Value of B is : "<<b<<endl;
    }
};

class C : public A,public B
{
protected:
    int c;
public:
    void input()
    {
        A :: input();
        B:: input();
        cout<<"Enter Value of C : ";
        cin>>c;
    }
    void putdata()
    {
        cout<<"Value of C is : "<<c<<endl;
    }
};
int main()
{
                C obj;
                obj.input();cout<<endl;
                obj.output();
                obj.display();
                obj.putdata();
    return 0;
}
