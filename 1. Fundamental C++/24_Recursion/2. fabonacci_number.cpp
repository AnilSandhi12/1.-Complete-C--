#include<iostream>
using namespace std;

int fib(int n){
    if(n<=1){
        return 1;
    }
 return (n-1)+(n-2);
}
int main(){
                   int a;
                   cout<<"Number : ";cin>>a;cout<<endl;

         cout<<"The Term in Fibonacci  Sequence at Poisition "<<a<<" is : "<<fib(a)<<endl;
           cout<<endl;  return 0;
}
