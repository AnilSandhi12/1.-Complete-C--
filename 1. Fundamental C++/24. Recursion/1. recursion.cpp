#include<iostream>
using namespace std;

int factorial(int n){
 /*
                   Factorial Of Number :
                   6! = 6*5*4*3*2*1
                   1! = 1
                   0! = 1
                n! = n* (n-1);

*/
             if(n<=1){
                return 1;
             }
             return n*factorial(n-1);
}
int main(){
            cout<<"****************** Recursion *************************\n\n";
            //   Recursion is Nothing but a Function which Call itself.
                         int a;

                         cout<<"Enter Number : ";cin>>a;cout<<endl;

                         cout<<"The Factorial of "<<a<<" is : "<<factorial(a)<<endl;
  return 0;
}

