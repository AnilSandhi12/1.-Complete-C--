#include<iostream>
using namespace std;
//-----------------------  Example 1:
class A
{
    int x,y,z;
public:
    void set(int x,int y,int z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
    void display()
    {
        cout<<"x is : "<<x<<endl;
        cout<<"y is : "<<y<<endl;
        cout<<"z is : "<<z<<endl;
    }

};

//-----------------------  Example 2:
class King
{
public:
    void call();
    void Text()
    {
        cout<<"Hello! Brother \n";
        this->call();
    }
};
void King :: call()
{
    cout<<"A\n";
    cout<<"B\n";
    cout<<"C\n";
}

//-----------------------  Example 3:
class Test
{
    int num;
public:
   Test & Assign(int num){
         // this->num=num;
          this->num=num+1000;
          return *this;
   }
   void display(){
   cout<<"The Value of Num is : "<<num<<endl;
   }
};

int main()
{
    //---------------------- 1:
    A obj;
    obj.set(20,59,87);
    obj.display();

    //---------------------- 2:
    King a;
    a.Text();

    //---------------------- 3:
         Test n1;
         n1.Assign(100).display();
    return 0;
}
