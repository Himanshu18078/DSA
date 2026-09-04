#include<iostream>
using namespace std;
void display(int* a){
  for(int i = 0;i < 5; i++){
    cout<<*a<<" ";
    a++;
  }
  cout<<endl;
}
int main(){
  int arr[5] = {1,2,3,4,5};
  int* ptr = arr;
  display(arr);
  display(ptr);
}