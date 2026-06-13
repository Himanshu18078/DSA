#include<iostream>
using namespace std;
int main(){
  int arr[] = {4,56,465,78,87,6,64,12};

  // int *ptr = arr;
  // int *ptr = &arr[0];
  // cout<<ptr<<endl;
  // cout<<ptr[0]<<endl;

  
  // for(int i = 0; i < 8;i++){
  //   cout<<ptr[i]<<" ";
  // }
  // cout<<endl;
  // ptr[0] = 8;
  // *ptr = 8;
  // for(int i = 0; i < 8;i++){
  //   cout<<ptr[i]<<" ";
  // }
  int* ptr = arr;
  for(int i = 0; i < 8; i++){
    cout<<*ptr <<" ";
    ptr++;
  }
}