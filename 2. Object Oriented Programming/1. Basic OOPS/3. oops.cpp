#include<iostream>
using namespace std;

class Employee{
    public:
      string name;
      string company;
      int age;
};
int main()
{
          Employee employee1;
          employee1.name = "Yatin";
          employee1.company = "Bebo Technology";
          employee1.age = 20;

          cout<<employee1.name<<endl;
          cout<<employee1.company<<endl;
          cout<<employee1.age<<endl;

    return 0;
}

