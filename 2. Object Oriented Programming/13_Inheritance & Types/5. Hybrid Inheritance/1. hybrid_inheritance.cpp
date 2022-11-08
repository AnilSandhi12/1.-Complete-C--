#include<iostream>
using namespace std;

class A{
     public:
        void getData(){
           cout<<"Inside Class A."<<endl;
        }
};
class B : public A{
     public:
        void display(){
         cout<<"Inside Class B."<<endl;
        }
};
class C{
 public:
     void message(){
        cout<<"Inside Class C."<<endl;
     }
};
class D : public B,public C{
 public:
    void print(){
     cout<<"Inside Class D."<<endl;
    }
};
int main(){
          D obj;
          obj.getData();
          obj.display();
          obj.message();
          obj.print();
     return 0;
}
