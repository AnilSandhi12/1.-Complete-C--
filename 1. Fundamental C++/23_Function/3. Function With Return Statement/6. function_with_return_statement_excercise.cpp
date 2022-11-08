#include<iostream>
using namespace std;

void checkMarksGrade(int marks){
                  if(marks == 100)
                        cout<<"Your Grade is O :)";
                  else if(marks>=90 && marks<100)
                        cout<<"Your Grade is A+ :)";
                  else if(marks>=80 && marks<90)
                        cout<<"Your Grade is A";
                  else if(marks > 70 && marks<80)
                        cout<<"Your Grade is B+";
                  else if(marks>60 && marks<70)
                        cout<<"Your Grade is B :)";
                  else if(marks>50 && marks<60)
                        cout<<"Your Grade is  C+";
                  else if(marks>40 && marks<50)
                        cout<<"Your Grade is C";
                   else if(marks>30 && marks<40)
                        cout<<"Your Grade is D :(";
                    else if(marks<30)
                        cout<<"Sorry! You Are Fail :(";
                    else
                       cout<<"Invalid Input!";
}
int main(){
                  int score;

                  cout<<"Enter Marks : ";cin>>score;

                  checkMarksGrade(score);
   return 0;
}
