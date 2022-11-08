#include<iostream>
using namespace std;


typedef struct employee{
         int eid;
         char favChar;
         float salary;

}ep;
int main(){
 //            Structure Using Typedef.
                         ep yatin;
                          yatin.eid = 1;
                          yatin.favChar = 'B';
                          yatin.salary = 12000000;

                          cout<<"Value is : "<<yatin.eid<<endl;
                          cout<<"Value is : "<<yatin.favChar<<endl;
                          cout<<"Value is : "<<yatin.salary<<endl<<endl;

                          ep anshu;
                          anshu.eid = 2;
                          anshu.favChar = 'V';
                          anshu.salary = 5000000;

                          cout<<"Value is : "<<anshu.eid<<endl;
                          cout<<"Value is : "<<anshu.favChar<<endl;
                          cout<<"Value is : "<<anshu.salary<<endl;
            return 0;
}
