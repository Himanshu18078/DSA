// Write a function to calculate the nth fibonacci number using recsusrion
#include<iostream>
using namespace std;
int fibo(int num){
  if(num == 1 || num == 2) return 1;
  return fibo(num-1) + fibo(num-2);
}
int main(){
  cout<<fibo(5);
  return 0;
}