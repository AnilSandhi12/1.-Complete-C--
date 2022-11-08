#include<iostream>
using namespace std;

class Number{
    int a;
    int b;
    void isLarge(void){
            if(a>b){
                cout<<a<<" is Large Number\n";
            }
            else{
                cout<<b<<" is Large Number\n";
            }
    }
public:
          void  readNumber(void){
                     cout<<"Enter Two Numbers : ";cin>>a>>b;
          }
          void printNumber(void){
                    cout<<"Our Input Numbers are : "<<a<<" "<<b<<endl<<endl;
                    isLarge();
          }
};
int main(){
                   Number n;
                   n.readNumber();
                   n.printNumber();
                //   n.isLarge();   // We Can't Access Like This b/c Access is Private.
          return 0;
}
