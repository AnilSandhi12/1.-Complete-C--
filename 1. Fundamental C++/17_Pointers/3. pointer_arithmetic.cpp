#include<iostream>
using namespace std;

int main(){
 // ************************* Pointer Arithmetic in C++ *****************************
                     int a = 10;
                     int* aptr = &a;

                     cout<<"The Address of A is : "<<aptr<<endl;

                     aptr++;
                     cout<<"The Address of A is : "<<aptr<<endl;
    return 0;
}
