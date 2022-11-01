#include<iostream>
using namespace std;

int main(){
          cout<<"Print Array's Values Using For Loop\n\n";
                    int arr[10];

                cout<<"Enter Array's Values : \n";
                for(int i=0;i<10;i++){
                    cin>>arr[i];
                }
                cout<<"\nArray's Values are : \n";
                for(int i=0;i<10;i++){
                    cout<<arr[i]<<" ";
                }
           cout<<endl;  return 0;
}
