#include<iostream>
using namespace std;

class A{
  protected:
      int a;
  public:
    A(int x){
         a=x;
    }
    void display(){
     cout<<"A is : "<<a<<endl;
    }
};
class B{
  protected:
      int b;
  public:
    B(int y){
         b=y;
    }
    void putData(){
     cout<<"B is : "<<b<<endl;
    }
};
class C : public A,public B{
     int c;
 public:
    C(int p,int q,int r): A(p),B(q){
          c=r;
    }
    void show(){
       cout<<"C is : "<<c<<endl;
    }
};
int main(){
                 C obj(10,20,30);
                 obj.display();
                 obj.putData();
                 obj.show();
      return 0;
}
