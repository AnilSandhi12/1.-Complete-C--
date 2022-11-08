#include<iostream>
using namespace std;

int main(){
    cout<<" ***************** Do-While Loop**************\n\n";
    int i , n;

    cout<<"Number : ";cin>>n;cout<<endl;
    i = 1;
    do{
        cout<<"Number : "<<i<<endl;
        i++;
    }while(i<=n);

    cout<<" ***************** Table Using Do-While Loop**************\n\n";

    int a , num;

    cout<<"Number : ";cin>>num;cout<<endl;
     a =  1;
       do{
             cout<<a<<" * "<<num<<" = "<<a*num<<endl;
             a++;
       }
       while(a<=10);

    return 0;
}
