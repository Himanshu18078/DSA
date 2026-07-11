// Program to calculate sum from 0 upto n;
#include<iostream>
using namespace std;
void printSum(int sum,int num){
 if(num == 0){
  cout<<"Sum is : "<<sum<<endl;
  return;
 } 
 printSum(sum+num,num-1);
}
int main(){
  printSum(0,10);
}