#include<iostream>
using namespace std;
//   *********************************  Single Inheritance  *****************************************
class ABC
{
protected:
    int a;
public:
    void input()
    {
        cout<<"Enter Number : ";
        cin>>a;
    }
};
class XYZ : public ABC{
      int b;
  public :
     void getData(){
         cout<<"Enter Number : ";cin>>b;cout<<endl;
     }
     void display(){
          cout<<"Addition is : "<<a+b<<endl;
     }
} ;
int main()
{
        XYZ sum;
        sum.input();
        sum.getData();
        sum.display();
    return 0;
}
