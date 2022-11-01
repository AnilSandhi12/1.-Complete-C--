#include<iostream>
using namespace std;

class Student{
      public:
          int id;
          string name;
          void setData(int i, string n){
                  id = i;
                  name = n;
          }
          void getData(){
            cout<<id<<" "<<name<<endl;
          }
};
int main(){
                  Student a1;
                  Student a2;

                  a1.setData(1, "AnilSandhi");
                  a2.setData(2, "Yatin");

                  a1.getData();
                  a2.getData();
        return 0;
}
