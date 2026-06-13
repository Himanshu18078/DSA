// Program to calculaate sum of all the number of the array
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Please enter number of element : ";
  cin>>n;
  int arr[n];
  for(int i = 0;i < n;i++){
    cout<<"Please enter element "<<i<<" : ";
    cin>>arr[i];
  }
  int sum = 0;
  for(int i = 0 ; i < n ; i++){
    sum += arr[i]; 
  }
  cout<<"Sum of all the number of the array is : "<<sum<<endl;
  return 0;
}