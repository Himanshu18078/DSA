#include<iostream>
#include<vector>
using namespace std;
bool canPartition(const vector<int> &arr){
  if(arr.size() < 2) return false;

  vector<int> preSum(arr.size());
  preSum[0] = arr[0];
  for(int i = 1; i < arr.size(); i++){
    preSum[i] = arr[i] + preSum[i-1];
  }

  long total = preSum[preSum.size()-1];

  for(int i = 0; i < arr.size(); i++){
   if(preSum[i] == total - preSum[i]) return true;
  }
  return false;
}
int main(){
  vector<int> arr = {1,2,3,4,6,4};
  cout<<canPartition(arr)<<endl;
}