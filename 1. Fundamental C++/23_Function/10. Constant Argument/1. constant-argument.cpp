#include<iostream>
using namespace std;
/*
         syntax :
         type func_name ( const arguments){
                    // statements
         }
*/
          int num( const int x){
            //  x = x+1;  We cannot Change The Value of X because Our X is a Constant Argument.
                     return x;
          }
int main(){
       cout<<"************** Constant Arguments **********************\n\n";
            // If We Don't want To Change The Value Then we Can Use Constant Arguments;
                            cout<<num(6);
            return 0;
}
