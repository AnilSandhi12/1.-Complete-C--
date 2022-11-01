#include<iostream>
using namespace std;

int main(){
/*
 ********************************  Pointers in C++   ****************************
          Pointer is Nothing but a Data Type Which Hold The Address of Other Data Type.

*/
                     int a = 20;
                     int* b =  &a;

                     cout<<"********  Pointers *****************\n\n";
                     //  & --> ( Address of )Operator.

                     cout<<"The Address of A is : "<<b<<endl;
                     cout<<"The Address of A is : "<<&a<<endl;

                     //   * -->( Value At )  Dereference of Operator.

                     cout<<"The Value at Address B is : "<<*b<<endl;

                     cout<<"\n ********** Pointer to Pointer ***********\n\n";
                     int** c = &b;

                    cout<<"The Address of B is : "<<c<<endl;
                    cout<<"The Address of B is : "<<&b<<endl;

                    cout<<"Value at Address C is : "<<*c<<endl;
                    cout<<"Value at Address Value(Address (c)) is : "<<**c<<endl;



      return 0;
}
