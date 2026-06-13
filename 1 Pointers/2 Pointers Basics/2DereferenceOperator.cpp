#include<iostream>
using namespace std;
int main(){
  int a = 10;
  int* p = &a;
  cout<<"The Value of the a is "<<a<<endl;
  cout<<"The Value of the a is "<<*p<<endl; //This means there at the an addresss stored at pointer p , use that address and retrive the value store there.
  // Chaning the value of a using dereference variable
  *p = 200;
  cout<<"The Value of a is : "<<a<<endl;
  return 0 ;
}