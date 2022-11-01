#include<iostream>
using namespace std;

        void mySelf( string name , string city , int age)
        {
              cout<<"My Name is : "<<name<<endl;
              cout<<"I Am From : "<<city<<endl;
              cout<<"I Am : "<<age<<" Years Old"<<endl<<endl;
        }
      int main()
      {
                      string name1 , city1;
                      int age1;

                      cout << " Enter Your Name: ";
                      cin>>name1;

                      cout<<"Enter Your City : ";
                      cin>>city1;

                      cout<<"Enter Your Age : ";
                      cin>>age1;
                       cout<<endl;
                     mySelf( name1 , city1 , age1 );
         return 0;
      }
