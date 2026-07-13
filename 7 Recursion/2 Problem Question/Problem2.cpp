// Power function
#include<iostream>
using namespace std;
int power(int num , int exponent){
  if(exponent == 0) return 1;
  if(exponent == 1) return num;
  int ans = power(num , exponent/2);
  if(exponent % 2 != 0){
    return ans * ans * num;
  }
  return ans * ans;
}
int main(){
  cout<<power(2,10);
}