// Program to calculate a raised to the power b using recusion
#include<iostream>
using namespace std;
int pow(int val, int exponent){
  if(exponent == 1) return val;
  return pow(val, exponent -1)*val;
}
int main(){
  cout<<pow(4,4);
}