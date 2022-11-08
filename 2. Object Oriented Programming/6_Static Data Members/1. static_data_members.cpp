#include<iostream>
using namespace std;

class Sample{
         static int Count;
     public:
            void setData(void);
            void getData(void);
};
int Sample :: Count;
void Sample ::setData(void){
          cout<<"Hello,Guys!\n";
          Count++;
}
void Sample :: getData(void){
           cout<<"Count is : "<<Count;
}

int main()
{
           Sample a,b,c;

           a.setData();
           b.setData();
           c.setData();

           a.getData();

    return 0;
}
