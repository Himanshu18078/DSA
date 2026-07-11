// Program to print good morning using n time
#include<iostream>
using namespace std;
void greet(int n){
  if(n == 0)return;
  greet(n-1);
  cout<< n <<" : Good Morning "<<endl;
}
int main(){
  int n;
  cout<<"Please enter number of time you want to print good morning : ";
  cin>>n; 
  greet(n);
}