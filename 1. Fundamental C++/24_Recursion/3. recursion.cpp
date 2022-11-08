#include<iostream>
#include<math.h>
using namespace std;

int sum(int n){
// 1.
    if(n == 0){
        return 0;
    }
            return n + sum(n-1);
}
int raisedPower(int n , int p){
// 2.
                           if(p==0){
                            return 1;
                           }
                 return n * pow(n,p-1);
}
int factorial(int factNumber){
    //         3.
                 if(factNumber<=1){
                    return 1;
                 }
                return factNumber * factorial(factNumber-1);
}
int fib(int fibSeries){
                 if(fibSeries<=1){
                    return 1;
                 }
              return (fibSeries-1)+fib(fibSeries-2);
}
int main(){
                                // It is When a function calls itself to  make the problem Smaller.
  //                              1.     Add All Numbers Till N.
                    int x;

                    cout<<"Number : ";cin>>x;cout<<endl;

                    cout<<"The Sum of N is : "<<sum(x);

cout<<"\n\n***********************************************************************************************************\n\n";
//                         2. Calculate N raised to Power P.
                  int n , p;

                  cout<<"Enter N : ";cin>>n;
                  cout<<"Enter P : ";cin>>p;cout<<endl;

                  cout<<"The Value of "<<n<<" raised to Power "<<p<<" is : "<<raisedPower(n , p)<<endl<<endl;

cout<<"\n\n***********************************************************************************************************\n\n";
//                    3. Factorial of Number.
                   int y;

                   cout<<"Enter Number For Find Factorial : ";cin>>y;cout<<endl;

                   cout<<"The Factorial of "<<y<<" is : "<<factorial(y)<<endl;

cout<<"\n\n***********************************************************************************************************\n\n";
                     int fibSeries;

                     cout<<"Enter Number For Find Fib.-Series Number : ";cin>>fibSeries;cout<<endl;

                     cout<<"The Value of Fib.-Series on Number  "<<fibSeries<<" is : "<<fib(fibSeries);

cout<<"\n\n***********************************************************************************************************\n\n";
            cout<<endl; return 0;
}
