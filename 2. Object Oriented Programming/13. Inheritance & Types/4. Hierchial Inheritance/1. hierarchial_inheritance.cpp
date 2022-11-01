#include<iostream>
using namespace std;
//-------------------------------------------------  Hierarchial Inheritance -----------------------------------------------------------------------
class A{
 public:
   void message(){
        cout<<"Welcome to Inheritance !."<<endl;
   }
};
class B : public A{
   public:
    void getData(){
        cout<<"Inside Class B"<<endl;
    }
};
class C : public A{
     public:
         void input(){
             cout<<"Inside Class C"<<endl;
         }
};
int main(){
  C a;B b;
  b.message();
  b.getData();
  a.input();
   return 0;
}
