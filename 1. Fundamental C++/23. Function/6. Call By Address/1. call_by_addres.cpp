#include<iostream>
using namespace std;

int swapFunc(int* num1 , int* num2){ // Formal Parameter(num1 & num2) taking Values From ActualParmeters(uNum1 &uNum2);
               int temp = *num1;
               *num1 = *num2;
               *num2 = temp;
}
int main(){
cout<<"***************** Call By Address *********************************\n\n";
                          int uNum1 , uNum2;

                          cout<<"Num1 : ";cin>>uNum1;
                          cout<<"Num2 : ";cin>>uNum2;cout<<endl;

                           cout<<"The Value Of Num1 "<<uNum1<<" The Value Of Num2 "<<uNum2<<endl<<endl;
                              swapFunc(&uNum1,&uNum2);// Actual Parameters
                           cout<<"The Value Of Num1 "<<uNum1<<" The Value Of Num2 "<<uNum2;

             cout<<endl; return 0;
}
