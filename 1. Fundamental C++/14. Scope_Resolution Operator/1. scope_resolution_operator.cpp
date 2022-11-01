#include<iostream>
using namespace std;

           int c = 30;
int main(){
 //   By Default It will access the Value as Local Variable
           int c  = 45.95;

           cout<<"The Value of C is : "<<c<<endl;   //Access Local Value
           cout<<"The Value of C is : "<<::c<<endl; //  Access Global Value

               return 0;
}
