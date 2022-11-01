#include<iostream>
using namespace std;

int sumFunc(int a , int b, int c= 7){ // C is a Default Argument.
                  return a + b +c;
}
float add(int num1 = 10 , float num2 = 3.4){
     return num1 + num2;
}
int main(){
 cout<<"********************Default Arguments ***********************\n\n";
                    int x , y , z;
                    cout<<"Number1 ";cin>>x;
                    cout<<"Number2 ";cin>>y;cout<<endl;

                    cout<<"The Sum is : "<<sumFunc(x , y)<<endl;
                    cout<<"The Sum is : "<<sumFunc(x , y)<<endl<<endl;


                    cout<<"The Sum is : "<<add(2.4);
                 //   cout<<"The Sum is : "<<add(num1 , num2);

          return 0;
}
