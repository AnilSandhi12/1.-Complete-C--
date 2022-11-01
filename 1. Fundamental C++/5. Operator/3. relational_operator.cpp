#include<iostream>
using namespace std;

int main(){
         cout<<" **************** Relational Operator *****************\n\n";

             int num1 = 20, num2 = 30 , num3 = 70 , num4 = 70 , num5 = 50 , num6 = 40;

         cout<<" ****************[ == ] Relational Operator *****************\n\n";

             if(num1 == num2){ cout<<"1. Numbers Are Equal\n";}else{cout<<"1. Numbers Are Different\n";}
             if(num3 == num4){ cout<<"2. Numbers Are Equal\n";}else{cout<<"2. Numbers Are Different\n";}

         cout<<"\n\n ****************[ < ] Relational Operator *****************\n\n";

             if(num1<num2){cout<<"1. Num1 is Less Than Num2\n";}else{cout<<"1. Num1 is Greater Than Num2\n";}
             if(num5<num6){cout<<"2. Num5 is Less than Num6\n";}else{cout<<"2. Num5 is Greater Than Num6\n";}

         cout<<" \n\n****************[ > ] Relational Operator *****************\n\n";

         if(num1>num2){cout<<"1. Num1 is Greater Than Num2\n";}else{cout<<"1. Num1 is Less Than Num2\n";}
         if(num5>num6){cout<<"2. Num5 is Greater Than Num6\n";}else{cout<<"1. Num5 is Less Than Num6\n";}

         cout<<" \n\n****************[ != ] Relational Operator *****************\n\n";

         if(num1!= num2){cout<<"1. Num1 is Not Equal To Num2\n";}else{cout<<"1. Num1 is Equal To Num2\n";}
         if(num3!=num4){cout<<"2. Num3 is Not Equal To Num4\n";}else{cout<<"2. Num3 is Equal To Num4\n";}

         cout<<endl;
return 0;
}
