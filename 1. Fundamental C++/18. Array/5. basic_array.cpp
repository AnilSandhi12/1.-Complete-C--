#include<iostream>
using namespace std;

int main(){
 cout<<" ********************** Array *****************************\n";
       /*
              Array is used to store Similar Types of Values.
       */
                       cout<<"\n **************  First Way To Declare Array. ***************\n";
                         int marks[4] = { 56 , 67 , 66 , 45};
                             cout<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<" "<<marks[3]<<endl;

                        cout<<"\n **************  Second Way To Declare Array. ***************\n";
                          int mathMarks[4];
                              mathMarks[0] = 34;
                              mathMarks[1] = 97;
                              mathMarks[2] = 67;
                              mathMarks[3] = 28;
                   //   We can ALso Change the Values Of Array.
                             mathMarks[3] = 65;
                          cout<<mathMarks[0]<<" "<<mathMarks[1]<<" "<<mathMarks[2]<<" "<<mathMarks[3]<<endl;

             cout<<"\n******************** Print Values By using For Loop. **************************\n";
                    for( int i=0; i<4;i++){
                          cout<<mathMarks[i]<<" ";
                    }cout<<endl;

             cout<<"\n********************* Print Values By using While Loop. ************************\n";
                           int j = 0;
                         while(j<4){
                            cout<<marks[j]<<" ";
                            j++;
                         }cout<<endl;

             cout<<"\n********************* Print Values By using Do-While Loop. ************************\n";
                     int k = 0;
                     do{
                              cout<<marks[k]<<" ";
                              k++;
                     }
                     while(k<4);
      cout<<endl;      return 0;
}
