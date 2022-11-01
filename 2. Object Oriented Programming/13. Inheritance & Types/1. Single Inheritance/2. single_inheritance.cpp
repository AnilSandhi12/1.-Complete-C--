#include<iostream>
using namespace std;

class Base{
     int data1; // Private by default and is not Inheritable..
 public :
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base :: setData(){
         data1 = 10;
         data2 = 20;
}
int Base:: getData1(){
        return data1;
}
int Base:: getData2(){
        return data2;
}

class Derived: public Base{
              int data3;
          public:
            int process();
            void display();
} ;
int Derived :: process(){
         data3 = data2*getData1();
         return data3;
}
void Derived :: display(){
                  cout<<"Value of Data 1 is : "<<getData1()<<endl;
                  cout<<"Value of Data 2 is : "<<data2<<endl;
                  cout<<"Value of Data 3 is : "<<data3<<endl;
}
int main(){
                Derived a;
                a.setData();
                a.process();
                a.display();

 return 0;
}