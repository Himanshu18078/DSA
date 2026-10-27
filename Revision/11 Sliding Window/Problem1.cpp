// Maximum Sum of subarray of k size
#include<iostream>
#include<vector>
using namespace std;
int maximumSum(vector<int> nums , int k){
  int sum = 0;
  for(int i = 0; i < k ; i++){
    sum += nums[i];
  }
  int i = 1;
  int j = i+k;
  int currentSum = sum;
  while (j < nums.size())
  {
    currentSum = sum - nums[i-1] + nums[j];
    sum = max(currentSum , sum);
    i++;
    j++;
  }
  return sum;
}
int main(){
  vector<int> v = {7,1,2,5,8,4,9,3,6};
  cout<<maximumSum(v , 3)<<endl;
}
