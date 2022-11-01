#include<iostream>
using namespace std;
/*
     Compiler May Not Perform Inlining in Such Circumstances like :
       (Loops , Static Variables , Recursive Function , When Return Type is Void , Swith Case Statement)
*/

inline int area(int a)
{
     return a * a;
}
int main(){
       int y;
       cout<<"Enter Side of square : ";cin>>y;cout<<endl;

       cout<<"Area of Square is : "<<area(y);
      cout<<endl;   return 0;
}
