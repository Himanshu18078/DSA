#include<iostream>
using namespace std;
int main(){
  int a = 10;
  int* address = &a;
  cout<<"Address of the a is : "<<&a<<endl;
  cout<<"Address of the a is : "<<address<<endl;
  return 0;
}