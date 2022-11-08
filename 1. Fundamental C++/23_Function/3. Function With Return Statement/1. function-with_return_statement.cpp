#include<iostream>
 using namespace std;

 int sum(int number1 , int number2);
    int main(){
        int num1 , num2;

        cout<<"Number 1 : ";cin>>num1;
        cout<<"Number 2 : ";cin>>num2;cout<<endl;

             cout<<"The Addition of two Numbers : "<<sum(num1 , num2);// Actual Parameter
       cout<<endl; return 0;
   }
int sum(int number1 , int number2){ // Formal Parmeter
      int result =  number1 + number2;
      return result;
 }
