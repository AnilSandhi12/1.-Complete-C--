#include<iostream>
using namespace std;

inline int func(int a , int b){
       return (a>b)?a:b;
}
int main(){
               int num1 , num2;

               cout<<"Num1 ";cin>>num1;
               cout<<"Num2 ";cin>>num2;cout<<endl;

               cout<<func(num1, num2) <<" is a Greatest Value.";
       cout<<endl; return 0;
}
