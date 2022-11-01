#include<iostream>
using namespace std;

int sum(int a , int b); // Function Pototype.
void g();
int main(){
           cout<<"********************** Function ***********************\n";
              int fnum , snum;
              cout<<"Enter First Number : ";cin>>fnum;
              cout<<"Enter Second Number : ";cin>>snum;cout<<endl;

            cout<<"The Sum is : "<< sum(fnum , snum)<<endl;//  fnum & snum are Actual Parameter.
            g();
          return 0;
}
int sum(int a , int b){ //  Formal Parameters (A and B) Will Be Taking Values From Actual Parameters(fnum , snum).
       int c = a + b;
        return c;
}
void g(){
      cout<<"Hello, Good Morning"<<endl;
}
