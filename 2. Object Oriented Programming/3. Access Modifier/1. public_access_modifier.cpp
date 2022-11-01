#include<iostream>
using namespace std;

//   Public Accesss Modifier
class Student{
       private:  //    Our Access is Only Private means We can access only inside this Class.
            string password;
        public: //  We can Access anyWhere(inside/Outside) of The Class.
            int rollNo;
            string name;
            string branch;
            int age;
            string studentUserId;
          void setData(int srRollNo , string stName , string stBranch , int stAge , string stUserId , string stPassword);
            void getData(){
                         cout<<"Student Roll Number is : "<<rollNo<<endl;
                         cout<<"Student Name is : "<<name<<endl;
                         cout<<"Student Branch is : "<<branch<<endl;
                         cout<<"Student Age is : "<<age<<endl;
                         cout<<"Student User Id is : "<<studentUserId<<endl;
                         cout<<"Student Password is : "<<password<<endl;
               }
};
 void Student :: setData(int srRollNo , string stName , string stBranch , int stAge , string stUserId, string stPassword ){
              rollNo = srRollNo;
              name = stName;
              branch = stBranch;
              age = stAge;
              studentUserId = stUserId;
              password = stPassword;
 }

int main(){
cout<<"******************* Public Access Modifier ***************************\n\n";
                       Student s1;
                       Student s2;
                      // s1.password = "204fg";  We can't Do This b/c Our Access is Private.

                       s1.rollNo = 20; //     We can Access thisValue b/c Access is Public.
                       cout<<s1.rollNo<<endl; //   We Don't Getting an Error.
 //                       cout<<s1.password<<endl;        We are Gettting an Error.
                       s1.setData(1, "Yatin" , "CSE", 20 ,"yatin123" ,"yatin@1090" );
                       s1.getData();cout<<endl;

                       s2.setData(2, "Hardeep Singh" , "IT", 21 ,"hardeer01" , "hardeep@1235");
                        s2.getData();

          return 0;
}
