#include<iostream>
using namespace std;

class Complex
{
    int a,b;
public:
    void setCompNumber(int  n1 , int n2){
                 a = n1;
                 b= n2;
    }
    friend Complex sumCompNumber(Complex  o1 , Complex o2);
    void getCompNumber(){
         cout<<"Your Number is : "<<a<<" + "<<b<<" i"<<endl;
    }

};
Complex sumCompNumber(Complex o1 , Complex o2){
             Complex o3;
             o3.setCompNumber((o1.a + o2.a), (o1.b + o2.b));
             return o3;
}
int main()
{
               Complex c1 , c2 , sum;
               c1.setCompNumber(4,5);
               c1.getCompNumber();

               c2.setCompNumber(7,8);
               c2.getCompNumber();

               sum = sumCompNumber(c1,c2);
               sum.getCompNumber();
    return 0;
}
