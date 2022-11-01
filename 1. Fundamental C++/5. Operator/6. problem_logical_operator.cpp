#include<iostream>
using namespace std;

int main(){
       int n;

       cout<<"Number : ";cin>>n;cout<<endl;

       if(n%2 == 0 && n%3 == 0){
                 cout<<"Divisible By Both\n";
       }
       else if(n%2==0){
                cout<<"Divisile By 2\n";
       }
       else if(n%3 ==0){
              cout<<"Divisible By 3\n";
       }
       else{
               cout<<"Divisible By None\n";
       }
      return 0;
}
