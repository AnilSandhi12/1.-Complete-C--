#include<iostream>
using namespace std;

class student{  // class  class_name
  public: // Access Modifier
        string name;     // name age gender are Data Members.
        int age;
        bool gender;
};
int main(){
                student a;  //  Object of Class;
                a.name = "Anil Sandhi";
                a.age = 20;
                a.gender = 1;
                cout<<a.name<<endl;
                cout<<a.age<<endl;
                cout<<a.gender<<endl;
             return 0;
}
