#include<iostream>
using namespace std;

class introduceToMe{
       string name,address;int age;
   public:
          introduceToMe();
          void getData(void);
};
introduceToMe :: introduceToMe(){
            name = "Anil Sandhi";
            age = 20;
            address = "Nanak Nagri , Near LPU";
}
void introduceToMe :: getData(){
       cout<<"My name is : "<<name<<"."<<endl;
       cout<<"I am "<<age<<" Years Old."<<endl;
       cout<<"I am From "<<address<<"."<<endl;
}
int main(){
              introduceToMe s1;
              s1.getData();
}
