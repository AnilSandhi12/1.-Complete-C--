#include<iostream>
using namespace std;

int main(){
//  ************************** Break & Continue ************************

             for( int i = 0; i<= 20; i++){
                if(i == 10){
                          break;
                }
                cout<<i<<" ";
             }cout<<endl;

             for(int a = 0; a<=30; a++){
                if(a == 15){
                    continue;
                }
                cout<<a<<" ";
             }

           return 0;
}
