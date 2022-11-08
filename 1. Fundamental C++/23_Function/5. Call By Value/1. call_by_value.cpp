#include<iostream>
#include<string>
using namespace std;

  void introduceToMe(string name, int age , string address){
                    cout<<"My Name is : "<<name<<" ."<<endl;
                    cout<<"I Am  "<<age<<" Years Old."<<endl;
                    cout<<"I Am From "<<address<<endl;
  }
int main(){
                   string youName, youAddress; int youAge;

                   cout<<"Enter Your Name : ";cin>>youName;
                   cout<<"Enter Your Age : ";cin>>youAge;
                   cout<<"Enter Your Address : ";cin>>youAddress;cout<<endl;

                   introduceToMe(youName , youAge , youAddress);

           cout<<endl; return 0;
}
