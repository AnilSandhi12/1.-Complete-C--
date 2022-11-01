#include<iostream>
using namespace std;

class calcMean{
      float a,b;
  public:
    void setNumber();
    friend  float meanNumber(calcMean);
};
void calcMean :: setNumber(){
      cout<<"Enter Two Numbers : ";cin>>a>>b;
}
 float meanNumber(calcMean s){
                return (s.a + s.b)/2;
    }
int main(){
              calcMean s;
              s.setNumber();
             cout <<"The Average is : "<<meanNumber(s);
             return 0;
}
