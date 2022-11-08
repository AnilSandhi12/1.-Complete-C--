#include<iostream>
#include<string>
using namespace std;

int main(){
// ******************  Omit Array Size ******************
                 string cars[5] = { "Audi" , "BMW","Volvo"};
                             cout<<"************ Print Array's Values ***************\n\n";
                             cout<<cars[0]<<endl;
                             cout<<cars[1]<<endl;
                             cout<<cars[2]<<endl;

                          cars[3] =  "Maruti";
                          cars[4] = "Swift";

                     cout<<"\n************ Print Array's Values Using For Loop ***************\n\n";
                       for(int i = 0; i < 5;i++){
                          cout<<cars[i]<<endl;
                       }
   return 0;
}
