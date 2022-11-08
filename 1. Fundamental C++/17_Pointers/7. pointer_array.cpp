#include<iostream>
using namespace std;

int main(){
  cout<<"******************* Pointers & Arrays ***************************\n";
                                int marks[5] = {95 , 34 , 65 , 87 , 65};

                                int* p = marks;

                                cout<<"The Value At *p is : "<<*p<<endl;
                                cout<<"The Value At *(p+1) is : "<<*(p+1)<<endl;
                                cout<<"The Value At *(p+2) is : "<<*(p+2)<<endl;
                                cout<<"The Value At *(p+3) is : "<<*(p+3)<<endl;
                                cout<<"The Value At *(p+4) is : "<<*(p+4)<<endl;
     return 0;
}
