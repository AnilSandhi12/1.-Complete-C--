#include<iostream>
using namespace std;

int main(){
    /*
      cout<<"************** Assignment Operator ******************\n\n";
      cout<<"************** Binary Operator *********************\n";
      float num1 , num2;

      cout<<"Number 1: ";cin>>num1;
      cout<<"Number 2 : ";cin>>num2; cout<<endl;

      cout<<"Addition of Two Number is : "<<num1+num2<<endl;
      cout<<"Subtraction of Two Number is : "<<num1-num2<<endl;
      cout<<"Multiplication of Two Number is : "<<num1*num2<<endl;
      cout<<"Division of Two Number is : "<<num1/num2<<endl;cout<<endl;
*/
      cout<<"************** Unary Operator *********************\n\n";

        cout<<" ************   Pre increment   ***********************\n\n";
      int Number_1 = 10 , Number_2;
          Number_2 = ++Number_1;  // Pre Increment
      cout<<Number_1<<" "<<Number_2<<endl;

        cout<<"\n\n ************   Post increment   ***********************\n\n";
      int Number_3 = 21 , Number_4;
      Number_4 = Number_3++; // Post Increment
      cout<<Number_3<<" "<<Number_4<<endl;

      cout<<" \n\n**************** Pre Decrement **********************\n\n";
      int Number_5 = 40 , Number_6;
      Number_6 = --Number_5;
      cout<<Number_5<<" "<<Number_6<<endl; //  39 39

      cout<<"\n\n ****************Post Decrement **********************\n\n";
      int Number_7 = 50 , Number_8;
      Number_8 = Number_7--;
      cout<<Number_7<<" "<<Number_8<<endl;  // 49 50
    return 0;
}
