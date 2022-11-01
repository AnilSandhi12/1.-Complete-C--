#include<iostream>
using namespace std;

struct Phone{
        string name;
        int storage;
        string color;
        float price;
};
struct Person{
          string name;
          int age;
          Phone smartPhone;
};
void printSmartPhoneInfo(Phone smartPhone){
           cout<<"Name "<<smartPhone.name<<endl;
           cout<<"Storage "<<smartPhone.storage<<" GB"<<endl;
           cout<<"Color "<<smartPhone.color<<endl;
           cout<<"Price "<<smartPhone.price<<endl;cout<<endl;
}
void printPersonInfo(Person person){
       cout<<"Name : "<<person.name<<endl;
       cout<<"Age : "<<person.age<<endl;
       printSmartPhoneInfo(person.smartPhone);
}
int main(){
          struct Phone p1;
           struct Phone p2;

             p1.name = "IPhone";
             p1.storage = 128;
             p1.color = "Black";
             p1.price = 90000.0;

             p2.name = "Samsung";
             p2.storage = 64;
             p2.color = "Violet";
             p2.price = 28000.0;

             printSmartPhoneInfo(p1);
             printSmartPhoneInfo(p2);

            struct   Person person;
             person.name = "Anil";
             person.age = 20;
             person.smartPhone = p2;

          printPersonInfo(person);

       return 0;
}
