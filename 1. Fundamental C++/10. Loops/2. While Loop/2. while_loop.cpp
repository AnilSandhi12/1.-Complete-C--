#include<iostream>
using namespace std;

int main(){
      cout<<"*************** While Loop *********************\n\n";
 /*     int n , i;

     cout<<"Enter Number : ";cin>>n;cout<<endl;
      i =1;
     while(i<=n){
              cout<<"Number : "<<i<<endl;
              i++;
     }
*/
      cout<<"*************** Table Using While Loop *********************\n\n";
      int num , a;

      cout<<"Enter Number : ";cin>>num;cout<<endl;

      a =1;
      while(a<=10){
             cout<<a<<" * "<<num<<" = "<<a*num<<endl;
             a++;
      }

    return 0;
}
