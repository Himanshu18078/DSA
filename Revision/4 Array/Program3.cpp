#include<iostream>
using namespace std;
void display(int arr[]){
  // for(auto e : arr){
  //   cout<<e<<" ";
  // }
  for(int i = 0; i < 5; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
void change(int arr[]){
  arr[0] = 100;
}
int main(){
  int arr[5] = {1,2,3,4,5};
  display(arr);
  change(arr);
  display(arr);
}