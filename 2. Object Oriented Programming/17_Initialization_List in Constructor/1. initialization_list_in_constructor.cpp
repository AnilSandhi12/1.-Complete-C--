#include<iostream>
using namespace std;

class Test
{
    int b;
    int a;
public:
  //  Test(int i,int j): a(i),b(j)    //Valid
   // Test(int i,int j): a(i),b(i+j)    //Valid
   // Test(int i,int j): a(i),b(2*j)    //Valid
  //  Test(int i,int j): a(i),b(a+j)    //Valid
   // Test(int i,int j): b(j),a(i+b)    //Only Valid when int b;int a; is initialised. OtherWise Create a Problem.
    Test(int i,int j): b(j),a(i+b)    //  Valid
    {
        cout<<"Constructor Executed\n";
        cout<<"Value of A is : "<<a<<endl;
        cout<<"Value of B is : "<<b<<endl;
     }
};
int main()
{
    Test t(4,6);

    return 0;
}
