#include<iostream>
using namespace std;

int main(){
           cout<<" ***********************Find Factorial Number **************************\n\n";

           int n , factorial = 1;

           cout<<"Enter Number : ";cin>>n;cout<<endl;

           for(int i= 1; i <=n; i++){
                factorial = factorial * i ;
             }
          cout<<"Factorial of "<<n<<" is : "<<factorial;
         cout<<endl;return 0;
}
