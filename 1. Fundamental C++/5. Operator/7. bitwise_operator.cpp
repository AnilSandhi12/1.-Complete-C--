#include<iostream>
using namespace std;

int main(){
         int a, b , c , d , e ,f;

         cout<<"Number 1 : ";cin>>a;
         cout<<"Number 2 : ";cin>>b;cout<<endl;

         c = a & b;
        cout<<"Output of Bitwise And Operator is : "<<c<<endl;

        d= a| b;
        cout<<"Output of Bitwise Or Operator is : "<<d<<endl;

        e = a ^ b;
        cout<<"Output of Bitwise Xor Operator is : "<<e<<endl;

          f =  ~b;
        cout<<"Output of Bitwise Complement Operator is : "<<f<<endl;


      return 0;
}
