#include<iostream>
using namespace std;

int main(){
    cout<<" *************Problems of Unary Operator *******************\n\n";

     cout<<"Problem 1 : \n\n";
      int Number_1 =1;
      //                      //1                    //3
      Number_1 = Number_1++ + ++Number_1;
      cout<<"Value is : "<<Number_1<<endl; //4

      cout<<"\n Problem 2: \n\n";
      int Number_3 = 1, Number_4 = 2 , Number_5;
      //                     1                    2                   1                          2                        3                          4
      Number_5 = Number_3 + Number_4 + Number_3++ + Number_4++ + ++Number_3 + ++Number_4;
      cout<<"Value is : "<<Number_3<<endl;// 1 2  3
      cout<<"Value is : "<<Number_4<<endl;//  2  3  4
      cout<<"Value is :"<<Number_5<<endl;//   13

      cout<<"\nProblem 3 : \n\n";
       int Number_6 = 0;
         //                      0                       0                            1                    1
        Number_6 = Number_6++ - --Number_6 + ++Number_6 - Number_6--;
        cout<<"Value is : "<<Number_6<<endl; // 0

       cout<<"\n Problem 4 : \n\n";
       int Number_7 = 1, Number_8 = 2 , Number_9 = 3;
        //                            1                         2                      3
        int Number_10 = Number_7-- - Number_8-- - Number_9--;

        cout<<"Value is : "<<Number_7<<endl; // 0
        cout<<"Value is : "<<Number_8<<endl;// 1
        cout<<"Value is : "<<Number_9<<endl;// 2
        cout<<"Value is : "<<Number_10<<endl;//   -4

        cout<<"Problem 5 : \n";
        int  Number_11 = 10, Number_12 = 20 , Number_13;
         //                         10                       9                           19                      20                      9                          20
        Number_13 = Number_11-- - Number_11++ + --Number_12 - ++Number_12 + --Number_11 - Number_12--
         //     10                         19
        + ++Number_11 - Number_12++;

        cout<<"Value  is : "<<Number_11<<endl;// 9 10 9 10
        cout<<"Value  is : "<<Number_12<<endl;//  19 20 19 20
        cout<<"Value  is : "<<Number_13<<endl;//  -20
 return 0;
}
