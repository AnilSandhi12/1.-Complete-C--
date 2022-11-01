#include<iostream>
using namespace std;

int main()
{
         /* Date Type in C++*/
         int myNumber;
         float myFloatNumber;
         double myDoubleNumber;
         char myLetter;
         bool myBooleanNumber;
         string myString;

         cout<<"Enter Number : ";cin>>myNumber;
         cout<<"Enter Float Number : ";cin>>myFloatNumber;
         cout<<"Enter Double Number : ";cin>>myDoubleNumber;
         cout<<"Enter Character : ";cin>>myLetter;
         cout<<"Enter Boolean Value : ";cin>>myBooleanNumber;
         cout<<"Enter String : ";cin>>myString;cout<<endl;

          cout<<"My Integer number is : "<<myNumber<<endl;
          cout<<"Size of Integer Data Type is : "<<sizeof(myNumber)<<endl<<endl;

          cout<<"My Float Number is : "<<myFloatNumber<<endl;
          cout<<"Size of Float Number is : "<<sizeof(myFloatNumber)<<endl<<endl;

        cout<<"My Double Number is : "<<myDoubleNumber<<endl;
        cout<<"Size of Double Number is: "<<sizeof(myDoubleNumber)<<endl<<endl;

        cout<<"My Character is : "<<myLetter<<endl;
        cout<<"Size of Character is : "<<sizeof(myLetter)<<endl<<endl;

        cout<<"My Boolean Value is : "<<myBooleanNumber<<endl;
        cout<<"Size of Boolean  Value is : "<<sizeof(myBooleanNumber)<<endl<<endl;

        cout<<"My Name is : "<<myString<<endl;
        cout<<"Size of String is : "<<sizeof(myString)<<endl<<endl;
        return 0;
}
