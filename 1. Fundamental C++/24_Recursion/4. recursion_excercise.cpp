#include<iostream>
#include<math.h>
using namespace std;

bool arraySortedOrNot(int arr[] , int n){
             if(n==1){
                return true;
             }
                bool restArray = arraySortedOrNot(arr + 1 , n-1);
            return (arr[0] < arr[1] && restArray);
}
int main(){
//                     Check An Array is Sorted Or Not.
            int arr[] = {1,2,3,4,5,6};
            int n = sizeof(arr)/sizeof(arr[0]);

            if(arraySortedOrNot(arr, n))
                       cout<<"Yes\n";
             else
                      cout<<"No\n";
            return 0;
}
