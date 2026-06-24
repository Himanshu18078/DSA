// 1480. Running Sum of 1d Array
/*
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4]
*/
#include<iostream>
#include<vector>
using namespace std;
/*
vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    vector<int> run(n);
    run[0] = nums[0];
    for(int i = 1; i < n; i++){
        run[i] = run[i-1] + nums[i];
    }
    return run;
  }
*/
// MORE OPTMIZED VERSION
vector<int> runningSum(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++){
            nums[i] = nums[i-1] + nums[i];
        }
        return nums;
    }
