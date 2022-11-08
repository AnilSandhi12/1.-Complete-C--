#include<iostream>
using namespace std;

int main(){
                            int arr[] = { 385, 457 ,454 ,45 ,  34};
                   cout<<" ************* Using For Loop *******************\n\n";
                   for(int i =0; i<7;i++){
                      cout<<arr[i]<<endl;
                   }

                   cout<<"\n ************* Using While Loop *******************\n\n";
                      int a = 0;
                     while(a<7){
                        cout<<arr[a]<<endl;
                        a++;
                     }

                   cout<<"\n ************* Using Do While Loop *******************\n\n";
                               int b = 0;
                               do{
                                cout<<arr[b]<<endl;
                                b++;
                               }while(b<7);
   return 0;
}
