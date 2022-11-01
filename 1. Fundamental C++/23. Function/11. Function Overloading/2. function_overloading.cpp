#include<iostream>
using namespace std;

// Calculate Volume of Cylinder.
int Volume(double r , int h){
            return 3.14*r*r*h;
}
// Calculate Volume of Cube.
int Volume(int a){
            return a*a*a;
}
//  Calculate Volume of Rectangle.
int Volume(int l , int b , int h){
            return l*b*h;
}
int main(){
                cout<<"The Volume of Cylinder is : "<<Volume(3,6)<<endl;
                cout<<"The Volume of Cube is : "<<Volume(3)<<endl;
                cout<<"The Volume of Rectangle is : "<<Volume(3,7,6)<<endl;
              return 0;
}
