// Program to search an element in the array(Linear search)
#include<iostream>
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
  int num;
  bool flag = false;
  cout<<"Please enter the element you want to find in the array : ";
  cin>>num;
  for(int i = 0;i< n;i++){
    if(num == arr[i]){
      flag = true;
    }
  }
  if(flag){
    cout<<"Present"<<endl;
  }else{
    cout<<"Not present"<<endl;
  }
}