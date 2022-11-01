#include<iostream>
#include<math.h>
using namespace std;

int  isPrime(int n);
int main(){
        cout<<"******************** Find Prime Number Within Given Range *************************\n\n";
/*
        int fnum , lnum;

        cout<<"F-Number : ";cin>>fnum;
        cout<<"L-Number : ";cin>>lnum;cout<<endl;

        cout<<"Primes Number Between "<<fnum<<" - "<<lnum<<" Are : ";
         for( int i = fnum; i<=lnum; i++){
                  if(isPrime(i)){
                      cout<<i<<" ";
                  }
         }
         */

         int num1 , num2 , fnd =0 , ctr = 0;

         cout<<"Input number for Starting Range : ";cin>>num1;
         cout<<"Input number for Ending Range : ";cin>>num2;cout<<endl;

         cout<<"Prime Numbers Between "<<num1<<" and "<<num2<<" Are : ";
         for(int a = num1; a<= num2; a++){
                  for(int j =2; j <= sqrt(a); j++){
                    if(a%j == 0){
                        ctr++;
                    }
                  }
                  if(ctr == 0 && a !=1){
                    fnd++;
                    cout<<a<<" ";
                  }
                  ctr = 0;
          }
             cout<<"\nTotal Number of Prime Numbers Are : "<<fnd;
       cout<<endl;  return 0;
}

       int  isPrime(int n){
             for(int i = 2; i*i<=n; i++){
                    if(n%i == 0){
                        return 0;
                    }
             }
             return 1;
        }




