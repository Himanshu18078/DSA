// Program to count number of element in the given array greater than a given number x
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Please enter the size of the array : ";
  cin>>n;
  int arr[n];
  for(int i = 0 ; i < n; i++ ){
    cout<<"Element at index "<<i<<" : ";
    cin>>arr[i];
  }
  int num;
  cout<<"Please enter a number to check : ";
  cin>> num;
  int count = 0;
  for(int i = 0 ; i < n ; i++){
    if(arr[i] > num){
      count++;
    }
  }
  cout<<"Total number of element greater then "<<num<<" is : "<<count;
}