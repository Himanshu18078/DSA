#include <iostream>
#include <vector>
using namespace std;
/*
Simples approach...
void sortColors(vector<int>& nums) {
      int noZ = 0;
      int noO = 0;
      int noT = 0;
      for(int i = 0 ; i < nums.size() ; i++){
        if(nums.at(i) == 0) noZ++;
        else if(nums.at(i) == 1) noO++;
        else  noT++;
      }
      for(int i = 0 ; i < nums.size();i++){
        if(i < noZ) nums.at(i) = 0;
        else if(i < noZ+noO) nums.at(i) = 1;
        else nums.at(i) = 2;
      }
    }
*/

/*
DUTCH FLAG ALGORITHM
// Dutch National Flag Algorithm
// Used to sort an array containing only 0s, 1s, and 2s in a single traversal.

// low  -> boundary for 0s
// mid  -> current element being processed
// high -> boundary for 2s

// Initialize:
// low = 0, mid = 0, high = n - 1

// While (mid <= high):
//
// 1. If arr[mid] == 0:
//    - Swap arr[low] and arr[mid]
//    - Increment low and mid
//
// 2. If arr[mid] == 1:
//    - Element is already in correct position
//    - Increment mid
//
// 3. If arr[mid] == 2:
//    - Swap arr[mid] and arr[high]
//    - Decrement high
//    - Do NOT increment mid because the swapped element
//      from high needs to be checked

// Result:
// - All 0s are placed at the beginning
// - All 1s remain in the middle
// - All 2s are placed at the end

// Time Complexity: O(n)
// Space Complexity: O(1)
*/
void sortColors(vector<int> &nums)
{
  int low = 0;
  int mid = 0;
  int high = nums.size() - 1;
  while(mid <= high){
    // Mistake: Used while(mid < high) instead of while(mid <= high),
    // causing the last unprocessed element (when mid == high) to be skipped.
    if(nums[mid] == 0){
      int temp = nums[low];
      nums[low] = nums[mid];
      nums[mid] = temp;
      low++;
      mid++;
    }
    else if(nums[mid] == 1){
      mid++;
    }
    else{
      int temp = nums[mid];
      nums[mid] = nums[high];
      nums[high] = temp;
      high--;
    }
  }
}
