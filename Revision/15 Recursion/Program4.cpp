// Program to calculate power using recursion
#include<iostream>
using namespace std;
int power(int base , int exponential){
  if(exponential == 0) return 1;
  return base * power(base , exponential-1);
}
int main(){
  cout<<power(10,3);
}