// Problem 1 : Two sum
#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
  // Choose the first element of the pair
  for (int i = 0; i < nums.size() - 1; i++) // we don't want i to go to the last index as no combination will be left
  {
    // Start from i + 1 so:
    // 1. We don't use the same element twice (i != j)
    // 2. We don't check duplicate pairs
    //    e.g. if (0,1) is checked, (1,0) won't be checked
    for (int j = i + 1; j < nums.size(); j++)
    {
      if (nums[i] + nums[j] == target)
      {
        // Return the indices of the two numbers
        return {i, j};
      }
    }
  }

  // Return an empty vector if no valid pair is found
  return {};
}