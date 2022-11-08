/*
        Create Two Classes:
        1. simpleCalculator - Takes Input of 2 Numbers using a Utility Function and perform ( + , - , * , / ) and Display The Result using Another
        Function.
        2. scientificCalculator - Takes Input of 2 Numbers using a Utility Function and perform any Four Scientific Operation of Your Choice
        and Display The Result using Another Function.

        Create Another Class hybridCalculator and inherit it Using These Two Classes:
        Q - What Type of inheritance Are You Using ? --> Multiple Inheritance
        Q - Which Mode of inheritance Are You Using ? --> Public
        Q - Create an Object of Inheritance and Display Result of simpleCalculator and scientificCalculator.
        Q - How is Code Reusability Implemented. -->
*/
#include<iostream>
#include<cmath>

using namespace std;

class simpleCalculator
{
    int a,b;
public:
    void getDataSimple()
    {
        cout<<"Enter the Value of A : ";
        cin>>a;
        cout<<"Enter the Value of B : ";
        cin>>b;
    }
    void performOperationsSimple()
    {
        cout<<"The Value of A+B is : "<<a+b<<endl;
        cout<<"The Value of A-B is : "<<a-b<<endl;
        cout<<"The Value of A*B is : "<<a*b<<endl;
        cout<<"The Value of A/B is : "<<double(a/b)<<endl;
    }
};
class scientificCalculator
{
    int a,b;
public:
    void getDataScientific()
    {
        cout<<"Enter the Value of A : ";
        cin>>a;
        cout<<"Enter the Value of B : ";
        cin>>b;
    }
    void performOperationsScientific()
    {
        cout<<"The Value of cos(a) is : "<<cos(a)<<endl;
        cout<<"The Value of sin(a) is : "<<sin(a)<<endl;
        cout<<"The Value of exp(a) is : "<<exp(a)<<endl;
        cout<<"The Value of tan(a) is : "<<tan(a)<<endl;
        }
};

class hybridCalculator : public simpleCalculator,public scientificCalculator{

};
int main()
{
            hybridCalculator calc;
            calc.getDataSimple();cout<<endl;
            calc.performOperationsSimple();cout<<endl;
            calc.getDataScientific();cout<<endl;
            calc.performOperationsScientific();
    return 0;
}
