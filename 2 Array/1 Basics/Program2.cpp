// Printing array using loops
#include<iostream>
using namespace std;
int main(){
  // Taking input using for loop
   int arr[10];
   for(int i = 0 ; i < 10 ; i++){
    cout<<"Please enter element number "<<i+1<<" : ";
    cin>>arr[i];
   }
  //  Printing the array using the loop
   for(int i = 0; i < 10 ; i ++){
    cout<<arr[i]<<" ";
   }
   return 0;
}