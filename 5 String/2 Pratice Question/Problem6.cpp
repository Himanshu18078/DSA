// Program to print total number of digit 
#include<iostream>
using namespace std;
int main(){
  int num;
  cout<<"Please enter your number : ";
  cin>>num;
  string snum = to_string(num);
  cout<<"Your number have total "<<snum.size()<<" digits"<<endl;
}