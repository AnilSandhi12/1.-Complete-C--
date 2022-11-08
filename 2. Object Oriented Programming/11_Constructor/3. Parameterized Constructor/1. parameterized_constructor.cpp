#include<iostream>
using namespace std;

class introduceToMe{
          string name,address;int age;
      public:
          introduceToMe(string st_Name , int st_Age ,string st_Address);
          void getData(void);
};
        introduceToMe :: introduceToMe(string st_Name , int st_Age ,string st_Address){
                      name = st_Name;
                      age = st_Age;
                      address = st_Address;
}
void introduceToMe :: getData(){
             cout<<"Name : "<<name<<endl;
             cout<<"Age : "<<age<<endl;
             cout<<"Address : "<<address<<endl;
}
int main(){
                    string stName , stAddress;int stAge;

                    cout<<"Enter Name : ";cin>>stName;
                    cout<<"Enter Age : ";cin>>stAge;
                    cout<<"Enter Address : ";cin>>stAddress;cout<<endl;

                  introduceToMe st(stName , stAge , stAddress);
                  st.getData();
}
