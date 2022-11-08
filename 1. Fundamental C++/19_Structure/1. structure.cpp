#include<iostream>
using namespace std;


  struct employee{
                         int eid;
                         char favChar;
                         float salary;
            };
int main(){
            cout<<"************ Structure *************\n";
            /*
                    Structure is a User Defined Data Type
                  Structure Are Used To Store Different of Values
            */
                              struct employee anil;
                              anil.eid = 1;
                              anil.favChar = 'A';
                              anil.salary = 1900000;

                              cout<<anil.eid<<endl;
                              cout<<anil.favChar<<endl;
                              cout<<anil.salary<<endl<<endl;

                              struct  employee yatin;
                              yatin.eid = 2;
                              yatin.favChar = '4';
                              yatin.salary = 120000000;

                              cout<<"Values is : "<<yatin.eid<<endl;
                              cout<<"Values is : "<<yatin.favChar<<endl;
                              cout<<"Values is : "<<yatin.salary<<endl;
          return 0;
}
