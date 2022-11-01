#include<iostream>
using namespace std;

class A
{
protected:
    int rollNo;
public:
    void getRollNo()
    {
        cout<<"Enter Roll No : ";
        cin>>rollNo;
    }/*
        void dispRoll(){
             cout<<"Your Roll No is : "<<rollNo;
        }*/
};
class B: public A
{
protected :
    int Subject1, Subject2;
public:
    void getSubMarks()
    {
        cout<<"Enter Marks of Subject 1 Out Of 100 : ";
        cin>>Subject1;
        cout<<"Enter Marks of Subject 2 Out Of 100 : ";
        cin>>Subject2;
    }/*
            void dispSubMarks(){
                    cout<<"Your Marks of Subject 1 is : "<<Subject1;
                    cout<<"Your Marks of Subject 2 is : "<<Subject2;
            }*/
};
class C : public B
{
    int sportsMarks;
public:
    void getSportsMarks()
    {
        cout<<"Enter Sports Marks Out Of 100 : ";
        cin>>sportsMarks;
        cout<<endl;
    }
    void getTotalMarks()
    {
        cout<<"Total Marks of Roll No "<<rollNo<<" is : "<<Subject1+Subject2+sportsMarks<<" Out Of 100 "<<endl;
    }
};
int main()
{
    C st;
    st.getRollNo();
    st.getSubMarks();
    st.getSportsMarks();
    st.getTotalMarks();
    return 0;
}
