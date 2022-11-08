//             Create a Structure-Name Person to Store Name Age and Salary.
#include<iostream>
#include<string>

using namespace std;

struct person{
        string pname;
         int page;
         float psalary;
};
int main(){
                  cout<<"*****************  Structure **********************\n";
                  struct person p1;

                  cout<<"Enter Person Name : ";cin>>p1.pname;
                  cout<<"Enter Person Age : ";cin>>p1.page;
                  cout<<"Enter Person Salary : ";cin>>p1.psalary;cout<<endl;

                  cout<<"Value is : "<<p1.pname<<endl;
                  cout<<"Value is : "<<p1.page<<endl;
                  cout<<"Value is : "<<p1.psalary<<endl;
        return 0;
}
