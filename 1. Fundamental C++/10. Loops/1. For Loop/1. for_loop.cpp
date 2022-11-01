#include<iostream>
using namespace std;

int main(){
     cout<<"*********** For Loop *********************\n\n";
        int n;

        cout<<"Enter Number : ";cin>>n;
     for(int i = 1; i<= n; i++){
              cout<<"Number : "<<i<<endl;
     }

     cout<<"*********** Table Using For Loop *********************\n\n";

     int num , a ;

     cout<<"Enter Number : ";cin>>num;cout<<endl;

     for(a = 1; a<=10; a++){
           cout<<a<<" * "<<num<<" = "<<a*num<<endl;
     }
    return 0;
}
