#include<iostream>
using namespace std;

class Employee
{
    int eId;
    int eSalary;
public:
    void setValue();
    void getValue();
};
void Employee :: setValue()
{
    cout<<"Enter Employee Id : ";
    cin>>eId;
    cout<<"Enter"<<"Id "<<eId<<" Employee Salary : ";
    cin>>eSalary;
}
void Employee :: getValue()
{
    cout<<"Employee Id is : "<<eId<<"\tEmployee Salary is : "<<eSalary<<endl;
}
int main()
{
    Employee e1[4];
    for(int i=0; i<4; i++)
    {
        e1[i].setValue();
    }
    for(int i=0; i<4; i++)
    {
        e1[i].getValue();
    }
    return 0;
}
