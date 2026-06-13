#include<iostream>
using namespace std;
void swap(int a , int b){
  int temp = a;
  a = b;
  b = temp;
  return;
}
int main(){
  int a,b;
  cout<<"Please enter first value : ";
  cin>>a;
  cout<<"Please enter second value : ";
  cin>>b;
  cout<<"A : "<<a<<" B : "<<b<<endl;
  swap(a,b);
  cout<<"A : "<<a<<" B : "<<b<<endl;
  return 0;
}