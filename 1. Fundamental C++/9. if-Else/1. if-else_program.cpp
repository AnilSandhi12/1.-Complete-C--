#include<iostream>
using namespace std;

int main(){
                  //   Take Values of Length and Breadth Of a Rectangle From User and Click if it is Square or Not.
                 int length , breadth;

                 cout<<"Enter Length : ";cin>>length;
                 cout<<"Enter Breadth : ";cin>>breadth;cout<<endl;

                 if(length == breadth){
                    cout<<"It is  Square.\n";
                 }else{
                     cout<<"It is Rectangle.\n";
                 }
             return 0;
}
