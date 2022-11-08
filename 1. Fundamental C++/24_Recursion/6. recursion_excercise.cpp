#include<iostream>
using namespace std;

int firstOccurance(int arr[] , int n , int i , int key){
                       if(i == n){
                        return -1;
                       }
                       if(arr[i]== key){
                        return i;
                       }
                        return firstOccurance(arr , n , i+1 , key);
}
int lastOccurance(int arr[] , int n , int i , int key){
                       if(i == n){
                        return -1;
                       }
                       int restArray =  lastOccurance(arr , n , i+1 , key);
                        if(restArray != -1){
                            return restArray;
                        }
                       if(arr[i]== key){
                        return i;
                       }
                       return -1;
}
int main(){
//                             Find The First and Last Occurance (Index) of a Number of an Array.
                                int arr[] = {4,2,1,2,5,2,7};

                                cout<<"The First Occurance is : "<<firstOccurance(arr , 7 , 0 ,2)<<endl;
                                cout<<"The Last Occurance is : "<<lastOccurance(arr, 7 ,0, 2);

              return 0;
}
