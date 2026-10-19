// Program to return sum of numbers between two indeces
#include<iostream>
#include<vector>
using namespace std;
int sumOfNumber(vector<int> arr , int a , int b){
  vector<int> preSum(arr.size());
  preSum[0] = arr[0];
  for(int i = 1; i < arr.size(); i++){
    preSum[i] = arr[i] + preSum[i-1];
  }
  if(a == 0) return preSum[b];
  return (preSum[b] - preSum[a-1]);
}

int main(){
  vector<int> arr = {1,2,3,4,5,6};
  int a = 0;
  int b = 5;
  int ans = sumOfNumber(arr , a , b);
  cout<<"Sum between index "<<a<<" and "<<b<<" is : "<<ans<<endl;
}