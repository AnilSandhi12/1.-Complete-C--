#include<iostream>
using namespace std;
int  Count=0;
class Demo{
     public:
        Demo(){
             Count++;
             cout<<"No. Of Object That Has been Created : "<<Count<<endl;
        }
        ~Demo(){
            Count--;
             cout<<"No. Of Object That Has been Destroyed : "<<Count<<endl;

        }

};
int main(){
                Demo a;
                Demo b;
                Demo c;
                {
                     Demo d;
                }
                cout<<"Back To Return"<<endl;
return 0;
}
