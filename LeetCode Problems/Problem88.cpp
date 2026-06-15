#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
  int i = m - 1;
  int j = n - 1;
  int k = m + n - 1;
  while (i >= 0 && j >= 0)
  {
    if (nums1[i] > nums2[j])
    {
      nums1[k] = nums1[i];
      i--;
      k--;
    }
    else
    {
      nums1[k] = nums2[j];
      k--;
      j--;
    }
  };
  
  /*
  Mistake: Do not use if(i == 0) because after the merge loop, i may be -1, 0, or any valid index.
  We only care whether elements remain in nums2, so use while(j >= 0).
  Example: if i = -1 and j = 2, nums2 still has elements left, but if(i == 0)
  will be false and those elements won't be copied.

  if (i == 0)
  {
    while (j <= 0)
    {
      nums1[k] = nums2[j];
      k--;
      j--;
    }
  };
  
  */
  while (j >= 0)
  {
    nums1[k] = nums2[j];
    k--;
    j--;
  }
  while (i >= 0)
  {
    nums1[k] = nums1[i];
    i--;
    k--;
  };
}