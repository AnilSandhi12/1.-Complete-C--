#include<iostream>
using namespace std;

     void showMenu()
     {
          cout<<"***********  Menu  **************\n";
          cout<<"1. Check Balance \n";
          cout<<"2. Deposit \n";
          cout<<"3. Withdraw \n";
          cout<<"4. Exit \n";
          cout<<"********************************\n";
     }
     int main()
     {
                 //    Check Balannce , Deposit , Withdraw , ShowMenu

                   int option;
                   double balance = 500;


             do{
                      showMenu();
                 cout << "Option : ";
                  cin >> option;

                  system("cls");
                  switch(option){
                       case 1:  cout << "Balance is : " << balance<<"$"<<endl; break;

                       case 2:  cout << "Deposit Amount : ";
                         double depositAmount; cin>>depositAmount;
                         balance += depositAmount; break;

                       case 3:  cout <<  "Withdraw Amount : ";
                         double withdrawAmount;  cin >> withdrawAmount;
                         if(withdrawAmount <= balance){
                               balance -= withdrawAmount;
                         }
                         else{
                                cout<<"Not Enough Money."<<endl;
                         }
                          break;
                  }
             }
             while (option != 4);

       return 0;
     }

