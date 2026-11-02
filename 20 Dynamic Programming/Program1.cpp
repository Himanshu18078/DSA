// Fibonacci Number
#include<iostream>
#include<vector>
using namespace std;
int fib(int num , vector<int> &dp){
  if(num <= 1) return num;
  if(dp[num] != -1) return dp[num];
  return dp[num] = fib(num-1 , dp) + fib(num-2 , dp);
}
int main(){
  int num = 3;
  vector<int> dp(num+1 , -1);
  dp[0] = 0;
  dp[1] = 1;
  fib(num , dp);
  for(int ele : dp){
    cout<<ele<<" ";
  }
  // cout<<fib(num , dp);
}