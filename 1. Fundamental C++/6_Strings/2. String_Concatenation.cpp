#include<iostream>
#include<string>
using namespace std;

int main(){
// String Concatenation : -   '+' Operator can be used between String to Add them Together To Make a New String.
            string firstName = "Anil ";
            string lastName = "Sandhi";
            string fullName = firstName + lastName;

            cout<<"My Name is "<<fullName<<endl;

  //  Basically String is a Object Which Contain a Functions That perform certain operation on String.So We can also Concatenate using Append.

         string fname = "Yatin ";
         string lname = "Grover";
         string full_Name = fname.append(lname);

        cout<<"My Name is "<<full_Name<<endl;
               return 0;
}
