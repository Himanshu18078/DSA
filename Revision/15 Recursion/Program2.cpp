// Program to print sum upto n number
#include<iostream>
using namespace std;
int sumUpToNNumber(int num){
  if(num == 0) return 0;
  int sum = num + sumUpToNNumber(num-1);
  cout<<sum<<" ";
  return sum ;
}
int main(){
  sumUpToNNumber(10);
}