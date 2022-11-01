#include<iostream>
using namespace std;

inline int Product(int a , int b){
            int c = a * b;
            return c;
}
int main(){
        cout<<"****************** Inline Function *******************************\n\n";
        /*
              Inline is a Request To Compiler (Not A Command) to make a Function as an Inline, to Reduce an Overhead of function calling.
              if Compiler Treat a Function as an inline function then , it Substitute the code  of Function in Single Line.
                       Inline Function Should Contain a Single Instruction.
        */
                   int num1 , num2;

                   cout<<"Num1 ";cin>>num1;
                   cout<<"Num2 ";cin>>num2;cout<<endl;
                  cout<<"Product Of Two Number is "<<Product(num1 , num2);
        cout<<endl; return 0;
}
