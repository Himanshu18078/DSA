#include<iostream>
#include<vector>
using namespace std;
void runningSum(vector<int>&nums){
  for(int i = 1; i < nums.size(); i++){
    nums[i] = nums[i] + nums[i-1];
  }
}
int main(){
  vector<int> nums ={1,2,3,4,5,6,7,8,9};
  runningSum(nums);
  for(int ele : nums){
    cout<<ele<<" ";
  }
}