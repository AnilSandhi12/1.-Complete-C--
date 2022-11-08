#include<iostream>
using namespace std;

class Sum{
       int Number1 , Number2;
   public:
         Sum();
       void getData(void);
};
Sum :: Sum(){
       Number1=20;Number2=10;
}
void Sum :: getData(){
        int sum = Number1+Number2;
        cout<<"The Sum is : "<<sum<<endl;
}
int main()
{
           Sum a;
           a.getData();
    return 0;
}
