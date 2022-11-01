#include<iostream>
using namespace std;

int main(){
  cout<<" ********************* Display nth Term of Natural Numbers and Their Sum\n\n";
  int i , n , sum = 0;

   cout<<"Input a Number of Terms : ";cin>>n;

   cout<<"The Natural Numbers upto "<<n<<"th Terms Are : \n";
  for(i = 1; i <=n; i++){
           cout<<i<<" ";
           sum = sum + i;
  }
      cout<<"\nSum of Natural Numbers is : "<<sum<<endl;
    return 0;
}
