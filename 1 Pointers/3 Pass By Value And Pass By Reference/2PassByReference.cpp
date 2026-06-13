#include<iostream>
using namespace std;
void swap(int *a , int *b){ //Step 2 : here we have defined that our function is excepting addresses 
  int temp = *a; //Step 3 : here we are getting the value with the help of dereference variable
  *a = *b;
  *b = temp;
  return;
}
int main(){
  int a,b;
  cout<<"Please enter first value : ";
  cin>>a;
  cout<<"Please enter second value : ";
  cin>>b;
  cout<<"A : "<<a<<" B : "<<b<<endl;
  swap(&a,&b);
  // Step 1 : Here we have passed the address of a and b
  cout<<"A : "<<a<<" B : "<<b<<endl;
  return 0;
}