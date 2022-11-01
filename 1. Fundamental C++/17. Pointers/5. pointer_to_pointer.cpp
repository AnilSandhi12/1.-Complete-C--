#include<iostream>
using namespace std;

int main(){
// *************************   Pointer To Pointer *******************************
                    int a = 10;
                    int* aptr = &a;

                    cout<<"Value at Address of A is : "<<*aptr<<endl;

                    int** aaptr = &aptr;
                    cout<<"Value at Address of A is : "<<**aaptr<<endl;
       return 0;
}
