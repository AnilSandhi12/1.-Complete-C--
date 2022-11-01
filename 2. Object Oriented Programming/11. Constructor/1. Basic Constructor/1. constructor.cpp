#include<iostream>
using namespace std;

class integer{
            int x,y;
        public:
          integer(){}
            integer(int x1,int y1){  // Do Nothing Constructor;
                x = x1;
                y =y1;
            }
            void showdata(){
                cout<<"X is : "<<x<<endl;
                cout<<"Y is : "<<y<<endl;
            }
};
int main(){
  cout<<"******************Constructor **************\n";
                integer i;
                integer j(10 ,29);
                j.showdata();
            return 0;
}
