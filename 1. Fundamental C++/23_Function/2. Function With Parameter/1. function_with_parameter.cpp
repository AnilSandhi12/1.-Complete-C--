   #include<iostream>
   using namespace std;

      void introduceMe(string name, string city , int age)
      {
         cout<<"My Name is : "<<name<<endl;
         cout<<"I Am From : "<<city<<endl;
         if(age != 0)
         cout<<"I Am "<<age<<" Years Old."<<endl<<endl;
      }

     int main()
     {
             introduceMe("Anil Sandhi", "Chaheru", 20);
             introduceMe("Hardeep Singh","Bhularai" , 21);
        return 0;
     }
