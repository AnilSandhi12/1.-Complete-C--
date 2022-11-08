#include<iostream>
using namespace std;

class Car{
           private:
               int speed;
           public:
            void maxspeed(int maxspeed);
            void  printmaxspeed(){
                    cout<<speed;
            }
};
void Car :: maxspeed(int maxspeed){
     speed = maxspeed;
}
int main(){
                    Car c1;
                    Car c2;
                    cout<<"Maximum Speed is : ";
                    c1.maxspeed(200);
                    c1.printmaxspeed();

                    cout<<"\nMaximum Speed is : ";
                    c2.maxspeed(400);
                    c2.printmaxspeed();
            return 0;
}
