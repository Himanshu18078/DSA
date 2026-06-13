// Program to find maximum element in the array.
#include<iostream>
#include<climits>
using namespace std;
int main(){
  int n;
  cout<<"Please enter the size of the array : ";
  cin>>n;
  int arr[n];
  for(int i = 0; i < n;i++){
    cout<< "Element "<<i<<" : ";
    cin>>arr[i];
  }
  // int max = arr[0];
  int max = INT_MIN;
  for(int i = 0; i < n ; i++){
    if(max < arr[i]){
      max = arr[i];
    }
  }
  cout<<"Maximum Element is : "<<max<<endl;
}