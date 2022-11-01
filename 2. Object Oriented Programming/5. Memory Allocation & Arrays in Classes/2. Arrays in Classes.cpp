#include<iostream>
using namespace std;
const int Size = 5;
// Print TotalMarks
class totalMarks
{

    int rollNo;
    int marks[Size];

public:
    void setTotalMarks();
    void displayTotalMarks();
};
void totalMarks :: setTotalMarks(void)
{
    cout<<"Enter Roll No : ";
    cin>>rollNo;
    for(int i=0; i<Size; i++)
    {
        cout<<"Enter Marks in Subject : "<<(i+1)<<" ";
        cin>>marks[i];
    }
}
void totalMarks :: displayTotalMarks(void)
{
    int total = 0;
    for(int i=0; i<Size; i++)
    {
        total = total+marks[i];
    }
    cout<<"\nTotal Marks are : "<<total;
}
int main()
{
    totalMarks s1;
    s1.setTotalMarks();
    s1.displayTotalMarks();
    cout<<endl;
    return 0;
}
