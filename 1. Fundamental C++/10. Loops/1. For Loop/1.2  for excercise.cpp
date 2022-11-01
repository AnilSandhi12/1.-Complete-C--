#include<iostream>
using namespace std;

int main(){
    cout<<" ********************** Print Sum of 10 Natural Number **********************\n\n";

    int i , n;
    int sum = 0;

    cout<<"Number : ";cin>>n;cout<<endl;
      cout<<n<<" Natural Numbers Are : ";
    for(i = 1; i<=n; i++){
           cout<<i<<" ";
           sum = sum+i;
    }
    cout<<"\nSum of "<<" Natural Number is : "<<sum;

   cout<<endl;

  return 0;
}
