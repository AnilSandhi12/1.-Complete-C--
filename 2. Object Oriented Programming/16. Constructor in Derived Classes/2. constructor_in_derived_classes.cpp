#include<iostream>
using namespace std;

class Base1{
  int data1;
  public:
      Base1(int i){
          data1= i;
          cout<<"Base1 Class Constructor Called\n";
      }
      void printDataBase1(){
        cout<<"The Value of Data is : "<<data1<<endl;
      }
};

class Base2{
  int data2;
  public:
      Base2(int i){
          data2= i;
          cout<<"Base2 Class Constructor Called\n";
      }
      void printDataBase2(){
        cout<<"The Value of Data is : "<<data2<<endl;
      }
};

class Derived : public Base1,public Base2{
      int derived1 , derived2;
  public:
    Derived(int a,int b, int c,int d): Base1(a),Base2(b){
             derived1= c;
             derived2=d;
             cout<<"Derived Class Constructor Called\n";
    }
    void printDataDerived(){
        cout<<"The Value of Derived1 is : "<<derived1<<endl;
        cout<<"The Value of Derived2 is : "<<derived2<<endl;
      }
};
int main(){
                   Derived der(1,2,3,4);
                   der.printDataBase1();
                   der.printDataBase2();
                   der.printDataDerived();

 return 0;
}
