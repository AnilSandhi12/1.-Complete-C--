#include<iostream>
using namespace std;

int main(){
   // ***************************  Literals in C++ *********************************
   // By Default Decimal Literals Are Double.
     float a =  45.45F;
     long double b = 45.45L;

     cout<<"The Value of a "<<a<<" The Value of b "<<b<<endl;
     cout<<"The Value is 34.45 : "<<sizeof(34.45)<<endl;
     cout<<"The Value is 34.45f : "<<sizeof(34.45f)<<endl;
     cout<<"The Value is 34.45F : "<<sizeof(34.45F)<<endl;
     cout<<"The Value is 34.4l : "<<sizeof(34.45l)<<endl;
     cout<<"The Value is 34.4L : "<<sizeof(34.45L)<<endl;
    return 0;
}
