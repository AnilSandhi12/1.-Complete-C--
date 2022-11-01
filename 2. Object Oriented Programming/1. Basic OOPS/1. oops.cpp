#include<iostream>
using namespace std;

// How To Make Class in C++.
class Employee{
         private:
                int a,b,c;
         public:
                int d,e;
                void setData(int a1, int b1, int c1); // Declaration
                void getData(){
                   cout<<"The Value of a :"<<a<<endl;
                   cout<<"The Value of b :"<<b<<endl;
                   cout<<"The Value of c :"<<c<<endl;
                   cout<<"The Value of d :"<<d<<endl;
                   cout<<"The Value of e :"<<e<<endl;
                }
};

void Employee :: setData(int a1, int b1, int c1){
      a =a1;
      b =b1;
      c =c1;
}

int main(){
cout<<"******************** OOPS Concept **********************************\n\n";
                 Employee Anil;
                  // Anil.a = 314;      This Will Throw an Error b/c A is a Private Access Modifier.
                 Anil.d = 34;
                 Anil.e = 90;
                 Anil.setData(1,2,3);
                 Anil.getData();

             return 0;
}
