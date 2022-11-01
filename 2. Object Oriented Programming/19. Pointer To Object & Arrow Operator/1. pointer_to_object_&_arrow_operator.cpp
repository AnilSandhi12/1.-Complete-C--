#include<iostream>
using namespace std;

class Complex
{
    int real,imaginary;
public:
    void getData()
    {
        cout<<"The Real Part is : "<<real<<endl;
        cout<<"The Imaginary Part is : "<<imaginary<<endl;
    }
    void setData(int a,int b)
    {
        real = a;
        imaginary=b;
    }
};
int main()
{
    //-------------------------------------------------  Pointer To Object ----------------------------------------------------------------
            Complex c1;
            Complex* ptr = &c1;
            (*ptr).setData(4,5);     //(*ptr) --> Bracket is Mendatory To Call The Pointer Variable.
            (*ptr).getData();

            Complex* ptr1 = new Complex[4];
            (*ptr1).setData(1,8);     //(*ptr) --> Bracket is Mendatory To Call The Pointer Variable.
            (*ptr1).getData();
//---------------------------------------------------  Arrow Operator  ---------------------------------------------------------
 // Arrow Operator Se Hum Ek Pointer Ko Dereference Krke Uske Function ko Run Kr Skte Hain :)
          ptr->setData(6,7);
          ptr->getData();

           Complex* ptr2 = new Complex[4];
            ptr2->setData(1,8);     //(*ptr) --> Bracket is Mendatory To Call The Pointer Variable.
            ptr2->getData();
       return 0;
}
