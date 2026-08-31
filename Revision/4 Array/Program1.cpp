#include<iostream>
using namespace std;

int main(){
  /* 
  Method 1 : Decleration + Initilization
  int arr[10];
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;
  arr[5] = 6;
  arr[6] = 7;
  arr[7] = 8;
  arr[8] = 9;
  arr[9] = 10;
  */
 /*
 Method 2 : Decleration + initilization
 int arr[10] ={1,2,3,4,5,6,7,8,9,10}; 
 
 */

 int arr[5];
 for(int i = 0 ; i < 5; i++){
  cout<<"Please enter element "<<i+1<<":";
  cin>>arr[i];
 }
 cout<<"Array is : "<<endl;
  for(auto num : arr){
    cout<<num<<" ";
  }
}