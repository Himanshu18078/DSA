// Passing array to the function : it is pass by reference automatically
#include<iostream>
using namespace std;
void dispaly(int* a , int size){ //this also works because when we pass array to the function we are not actually passing it arry but the address of the array
  for(int i = 0; i < size ; i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  return;
}
void change(int b[]){
  b[0] = 100;
}
int main(){
  int arr[] = {1,4,2,7,4};
  dispaly(arr , 5);
  change(arr);
  dispaly(arr,5);
  return 0;
}