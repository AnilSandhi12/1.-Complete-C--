#include<iostream>
using namespace std;

class Complex{
    int a,b;
        public:
            Complex(){
                  a=10;
                  b=20;
            }
            void printData(void){
                  cout<<"Value is : "<<a<<" + "<<b<<"i"<<endl;
            }
};

int main(){
                Complex c;
                c.printData();
           return 0;
}
