#include<iostream>
using namespace std;

int main()
{
         cout<<"***************Number is Prime or Not **********************\n\n";
           int num , a , ctr  = 0;

              cout<<"Input a number to check Prime or not : ";cin>>num;cout<<endl;cout<<"Enter Number is  ";

             for(a =1; a<=num; a++){
                   if(num % a == 0){
                       ctr++;
                   }
              }
             if(ctr == 2){
                    cout<<"Prime Number.";
             }else{
                  cout<<" Not Prime.";
             }

        cout<<endl; return 0;
}
