#include<iostream>
using namespace std;

int add(int a , int b){
    return a+b;
}
int add(int a , int b , int c){
     return a+b+c;
}
int main(){
 cout <<"******************* Function Overloading ****************************\n\n";
 //                                             Ik Chij Nu Multiple Tasks De Lai Use Krna.
                 cout<<"The Sum of 3 and 6 is : "<<add(3,6)<<endl;
                 cout<<"The Sum of 3 , 7 and 6 is : "<<add(3,7,6);
       return 0;
}
