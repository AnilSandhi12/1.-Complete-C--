#include<iostream>
using namespace std;

int main(){
// ***************************  Switch Case Statement ************************************

  /*               char v_c;

                 cout<<"Enter Character : ";cin>>v_c; cout<<endl;

                 switch(v_c){
                     case 'A' :cout<<"Character is Vowel.";break;
                     case 'E' :cout<<"Character is Vowel.";break;
                     case 'I' :cout<<"Character is Vowel.";break;
                     case 'O' :cout<<"Character is Vowel.";break;
                     case 'U' :cout<<"Character is Vowel.";break;
                     case 'a' :cout<<"Character is Vowel.";break;
                     case 'e' :cout<<"Character is Vowel.";break;
                     case 'i' :cout<<"Character is Vowel.";break;
                     case 'o' :cout<<"Character is Vowel.";break;
                     case 'u' :cout<<"Character is Vowel.";break;

                  default :cout<<"Character is Consonent.";
                 }
*/
                 char ch;

                 cout<<"Enter Character : ";cin>>ch;cout<<endl;

                 if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                      ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                      ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117 ||
                      ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 85
                      ){
                        cout<<ch<<" is Vowel."<<endl;
                      }
                else if( ch == 'b' || ch == 'c' || ch == 'd' || ch == 'f' || ch == 'g' || ch == 'h' || ch == 'j' || ch == 'k' || ch == 'i' || ch == 'm' || ch == 'n' ||
                         ch == 'p' ||  ch == 'q' || ch == 'r' || ch == 's' || ch == 't' || ch == 'v' || ch == 'w' || ch == 'x' || ch == 'y' || ch == 'z' ||
                         ch == 'B' || ch == 'C' || ch == 'D' || ch == 'F' || ch == 'G' || ch == 'H' || ch == 'J' || ch == 'K' || ch == 'I' || ch == 'M' || ch == 'N' ||
                         ch == 'P' ||  ch == 'Q' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'V' || ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z'
                         ){
                        cout<<ch<<" is Consonent."<<endl;
                }
              else{
                        cout<<"Invalid Input"<<endl;
               }

       return 0;
}
