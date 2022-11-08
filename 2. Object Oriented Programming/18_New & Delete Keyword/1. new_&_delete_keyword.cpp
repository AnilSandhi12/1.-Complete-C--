#include<iostream>
using namespace std;

int main()
{
//---------------------------------------------------  Basic Example Of Pointer  ------------------------------------------------
    int a=4;
    int*ptr = &a;

    cout<<"The Value at Address of a is : "<<*(ptr)<<endl;
    cout<<"Address of a is : "<<ptr<<endl;

//--------------------------------------------  New Keyword/ Operator -----------------------------------------------

            int* p = new int(40);
    cout<<"The Value at Address of P is : "<<*(p)<<endl;

    float* b = new float(59.27);
    cout<<"The Value at Address of B is : "<<*(b)<<endl;

    //Suppose We Want to Allocate the Block Of Memory To Store The 4 or 5 Integer.
    int* arr = new int[3];
     arr[0] = 38;
    arr[1] = 87;//  *(arr+1)= 20; --> Both Are Same.
    arr[2] = 23;
     delete[] arr;   // Now Contiguous Memory Block is Free.
    cout<<"The Value of Arr[0] is : "<<arr[0]<<endl;
    cout<<"The Value of Arr[1] is : "<<arr[1]<<endl;
    cout<<"The Value of Arr[2] is : "<<arr[2]<<endl;

//--------------------------------------------  Delete Keyword/ Operator -----------------------------------------------


    return 0;
}
