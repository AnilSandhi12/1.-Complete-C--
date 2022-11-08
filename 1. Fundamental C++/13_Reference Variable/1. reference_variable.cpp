#include<iostream>
using namespace std;

int main(){
     // ********************  Reference Variable *********************************
            int x = 20.45;
            int &y = x;

            cout<<"Value of X is : "<<x<<" Value of Y is : "<<y<<endl; y++;
            cout<<"Value of X is : "<<x<<" Value of Y is : "<<y<<endl;y++;
            cout<<"Value of X is : "<<x<<" Value of Y is : "<<y<<endl;

         return 0;
}
