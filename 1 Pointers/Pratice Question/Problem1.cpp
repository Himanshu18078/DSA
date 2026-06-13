// ADDITION OF TO NUMMBERS USING POINTER
#include <iostream>
using namespace std;
int main()
{
  // // Normal Way
  // int a , b;
  // cout<<"Please enter first number : ";
  // cin>>a;
  // int* addA = &a;
  // cout<<"Please enter second number : ";
  // cin>>b;
  // int* addB = &b;
  // int sum = *addA + *addB;
  // cout<<"Addition of two numbers are : "<<sum<<endl;

  // Taking input through the pointers
  int a, b;
  int *addA = &a;
  int *addB = &b;
  cout << "Please enter first number : ";
  cin >> *addA;
  /*
  But dereferencing is not only for reading. It gives you access to the actual object, which can be used for both reading and writing.
  Dereferencing a pointer gives access to the object (variable) located at the address stored in the pointer.
  */
  cout << "Please enter second number : ";
  cin >> *addB;
  cout << *addA + *addB << endl;
  cout << a + b;
  return 0;
}