#include<iostream>
using namespace std;

int main(){
                       int a= 10;
                       int* aptr = &a;

                       // Address of Operator
                       cout<<"Address of A : "<<aptr<<endl;
                       cout<<"Address of A : "<<&a<<endl;

                     //   We can Acess the Variable By Pointers.
                     //Dereference of Operator
                     cout<<"Value At Address aptr is : "<<*aptr<<endl;

                     *aptr = 50;
                     cout<<"Value at Address of aptr is : "<<*aptr<<endl;


        return 0;
}
