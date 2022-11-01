#include<iostream>
using namespace std;

union money{
          int rice;
          char car;
          float pounds;
};
int main(){
  cout<<"********************* Unions **********************\n";
  //  Unions Are Similar Like a Structure But Unions Provides Bettter Memry Management.
                            union money m1;
                            m1.rice = 39; // Only one Value can Use At time
                            m1.car = 'C';
                            m1.pounds = 16.65;
                            cout<<m1.pounds<<endl;

          return 0;
}
