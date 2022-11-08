#include<iostream>
using namespace std;

int moneyRecieved( int currentMoney , float factor = 1.04){
          return currentMoney*factor;
}
int main(){
            int money = 100000;cout<<endl;
        cout<<"If you Have "<<money<<" Rs in Your Bank Account, You Will Recieve "<<moneyRecieved(money)<<" After 1 Year."<<endl;
        cout<<"For VIP If you Have "<<money<<" Rs in Your Bank Account, You Will Recieve "<<moneyRecieved(money , 1.10)<<" After 1 Year.";
           cout<<endl;  return 0;
}
