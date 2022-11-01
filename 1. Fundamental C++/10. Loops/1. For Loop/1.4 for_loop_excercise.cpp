#include<iostream>
using namespace std;

int main(){
      cout<<" ************************ Print Perfect Number B/w 1 -500 ************************\n\n";

        int sum , fnum , lnum;

                  cout<<"First Number : ";cin>>fnum;
                  cout<<"Last Number : ";cin>>lnum;cout<<endl;

            cout<<"Perfect Numbers : ";

        for(int number = fnum; number<= lnum;number++){
               sum =0;
               for(int i =1; i<=number/2; i++){
                   if(number%i == 0){
                       sum += i;
                   }
               }
               if(sum == number){
                cout<<number<<" ";
               }
        }

        cout<<endl;
      return 0;
}
