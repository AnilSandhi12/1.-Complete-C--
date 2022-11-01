#include<iostream>
using namespace std;

// first way to Create a Class
class myFirstClass{    // The Class
               public:    //  Access Specifier
                void myMethod(){
                //   Method/Function Defined Inside The Class
                cout<<"Hello World\n";
                }
};
//   Second Way To Create A Class
class mySecondClass{
             public:
                 void mySecMethod();
};
void mySecondClass :: mySecMethod(){
          cout<<"Hello World\n";
}
int main(){

            myFirstClass myObj; // Creating an Object of myFirstClass
            myObj.myMethod();

            mySecondClass mySecObj;
            mySecObj.mySecMethod();
       return 0;
}
