#include<iostream>
using namespace std;

int dec(int n){
                    if(n==1){
                            cout<<"1"<<endl;
                        return 0;
                    }
                    cout<<n<<" ";
                    dec(n-1);
}
int inc(int n){
             if(n==1){
                    cout<<"1 ";
             return 0;
             }
              inc(n-1);
            cout<<n<<" ";

}
int main(){
 //       Print Number Till N :--  1. Decreasing Order    2. Increasing  Order.
                 int n;

                 cout<<"Number : ";cin>>n;cout<<endl;
                cout<<"Increasing Order is : ";dec(n);
                cout<<"Decreasing Order is : ";inc(n);
        cout<<endl; return 0;
}
