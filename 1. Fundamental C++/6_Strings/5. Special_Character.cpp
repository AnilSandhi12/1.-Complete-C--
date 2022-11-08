#include<iostream>
#include<string>
using namespace std;

int main(){
       /*
          Escape Character             Result            Description
                \'                                      '                    sSingle Quote
                \"                                      "                   Double Quote
                \\                                      \                   Backslash
       */
       string txt = "We are so-called \"Vikings\" From the North";
       cout<<txt<<endl;

       string str = "it\'s Alright.";
        cout<<str<<endl;

       string backslash = "The Chacter \\ is called Backslash.";
       cout<<backslash;
    cout<<endl;  return 0;
}
