#include<iostream>
using namespace std;

int main(){
// ********************** Array Pointers ********************************
               int arr[] = { 10 , 20 , 30 };
               cout<<*arr<<endl;

               int* ptr = arr;
               for(int i=0;i<3;i++){
                cout<<*ptr<<endl;
                ptr++;
               }

               for(int j=0;j<3;j++){
                cout<<*(arr+j)<<endl;
                ptr++;
               }
   return 0;
}
