#include<iostream>
using namespace std;
int main(){
  int x = 7;
  int* ptr = &x;
  cout<< *ptr<<endl;
  ptr = ptr + 1;
  cout<<*ptr<<endl; //this will print a random value bcz we don't have anything in the next loaaction
  return 0;
}
