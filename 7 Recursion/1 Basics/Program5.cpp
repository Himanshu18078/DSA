// Program to print counting up n number
#include<iostream>
using namespace std;
//classic version
void printCounting1(int num){
  if(num == 0)return; //base case
  printCounting1(num-1);
  cout<<num<<endl;
}
//using an extra variale
void printCounting(int i,int num){
  if(i > num) return;
  cout<<i<<endl;
  printCounting(i+1,num);
}
int main(){
  printCounting(1,10);
  return 0;
}