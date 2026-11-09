// Program to calculate the nth fibonacci number using recursion
#include<iostream>
using namespace std;
int nthFibonacciNumber(int number){
  if(number <= 1 ) return number;
  return nthFibonacciNumber(number-1) + nthFibonacciNumber(number-2);
}
int main(){
  cout<<nthFibonacciNumber(6)<<endl;
}