#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter Number : ";cin>>n;cout<<endl;

    if(n>10)
        {
            cout<<"More Than 10";
    }
    else if(n<10)
        {
            cout<<"Less Than 10";
    }
    else
        {
            cout<<"Equal To 10";
    }
    cout<<endl;
        return 0;
}
