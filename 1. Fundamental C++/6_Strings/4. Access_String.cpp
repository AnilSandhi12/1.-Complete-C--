#include<iostream>
#include<string>
using namespace std;

int main(){
 //    We can access Character in String By Referencing to its index Number inside square Brackets.
             string word = "Hello";

             cout<<"Our Character on 1 Index is "<<word[0]<<endl;
             cout<<"Our Character on 2 Index is "<<word[1]<<endl;
             cout<<"Our Character on 3 Index is "<<word[2]<<endl;
             cout<<"Our Character on 4 Index is "<<word[3]<<endl;
             cout<<"Our Character on 5 Index is "<<word[4]<<endl<<endl;

//    We can Change the Character By using Index.
         string  name = "Ansh";
         name[2] ='i';
         name[3] ='l';
         cout<<"My Name is "<<name;
       return 0;
}
