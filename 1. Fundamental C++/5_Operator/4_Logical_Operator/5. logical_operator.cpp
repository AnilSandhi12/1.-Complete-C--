#include<iostream>
using namespace std;

int main(){
       int num1 , num2;

       cout<<"Number 1 : ";
       cin>>num1;

       cout<<"Number 2 : ";
       cin>>num2;cout<<endl;

       //    &&  and  || Operator in C++
       if(num1 == 2 && num2 == 2){
              cout<<"Both Values Are Equal To 2\n";
       }else if(num1 == 2 || num2 == 2){
             cout<<"At Least One Value is Equal To 2\n";
       }
       else{
             cout<<"Values Are Not Equal to 2\n";
       }cout<<endl;

       //   ! Operator in C++
       if(num1 != num2){
                 cout<<"Both Numbers Are Diffferent\n";
       }else{
             cout<<"Both Numbers Are Equal\n";
       }
     return 0;
}
