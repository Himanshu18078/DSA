// Program to rotate an array k time
#include <iostream>
#include <vector>
using namespace std;
void reversePart(vector<int>& nums, int left, int right)
{
    while (left < right)
    {
        swap(nums[left], nums[right]);
        left++;
        right--;
    }
}

void rotate(vector<int>& nums, int k)
{
    int n = nums.size();

    // Empty array: nothing to rotate
    if (n == 0) return;

    // Convert large k into an equivalent smaller rotation
    // Example: n = 7, k = 10
    // k = 10 % 7 = 3
    k %= n;

    // Rotating by 0 positions changes nothing
    if (k == 0) return;

    // Split point:
    //
    // n = 7, k = 3
    //
    // [1,2,3,4 | 5,6,7]
    //  0     3   4   6
    //
    // Left part  size = n - k = 4
    // Right part size = k = 3

    // Reverse left part
    //
    // Start index = 0
    // End index   = (n - k) - 1
    //
    // Example:
    // reversePart(nums, 0, 3)
    reversePart(nums, 0, n - k - 1);

    // Reverse right part
    //
    // Start index = n - k
    // End index   = n - 1
    //
    // Example:
    // reversePart(nums, 4, 6)
    reversePart(nums, n - k, n - 1);

    // Reverse the entire array
    //
    // Start index = 0
    // End index   = n - 1
    //
    // Example:
    // reversePart(nums, 0, 6)
    reversePart(nums, 0, n - 1);
}