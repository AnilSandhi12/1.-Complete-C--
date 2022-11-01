#include<iostream>
#include<string>
using namespace std;

class binary{
      string s;
           void chk_bin(void);
public:
           void read(void);
           void onceComplement(void);
           void onceComplementDisplay(void);
};
void binary :: read(void){
          cout<<"Enter a Binary Number : ";cin>>s;cout<<endl;
}
void binary :: chk_bin(void){
           for(int i=0;i<s.length();i++){
                    if(s.at(i)!= '0' && s.at(i)!='1'){
                              cout<<"Incorrect Binary Format \n";
                              exit(0);
                    }

           }
}
void binary :: onceComplement(void){
    chk_bin();
            for(int i=0;i<s.length();i++){
                if(s.at(i)=='0'){
                         s.at(i) = '1';
                }else{
                    s.at(i) = '0';
                }
            }
}
void  binary :: onceComplementDisplay(void){
               cout<<"Once Complement of Your Binary Number\n";
               for(int i=0;i<s.length();i++){
                        cout<<s.at(i);
               }cout<<endl;
}
int main(){
cout<<"********************* Nesting of Member Function *********************\n\n";
/*
                 OOPS Classes & Objects
                 1. C++ -->  initially called --> C with Classes.
                 2. Class --> Extension of Structure(in C).
                 3. Structure had Limitation -->
                           -->  members  are Public.
                           -->   No Method.
                 4. Classes --> Structures + More.
                 5. classes -->  can have Method and Properties.
                 6. classes -->  can make few Members as Private & few as Public.
                 7. Structure in C++ are typedefed.
                 7. We can declare Object along with class declaration.
                        Like This :        class Employee{
                                      class definition;
                        }  harry , rohan ,lovish;
                 8. harry.salary = 8;        make no Sense if Salary is Private.
*/
/*
                                 Nesting Member Function
             -->  Suppose We have a Function which we already Made. then that Function Use Private Variable. Then We can call another function
             inside this  Function without Putting Dot( . )
*/
                 binary b;
                 b.read();
                // b.chk_bin();
                 b. onceComplement();
                 b.onceComplementDisplay();
        return 0;
}
