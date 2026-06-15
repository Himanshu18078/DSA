// This is merge sort
#include <iostream>
#include <vector>
using namespace std;
vector<int> sortVectors(vector<int> nums1, vector<int> nums2)
{
  int n = nums1.size();
  int m = nums2.size();
  vector<int> newVector(n + m);
  int i = 0;
  int j = 0;
  int k = 0;
  while (i < n && j < m)
  {
    if (nums1[i] < nums2[j])
    {
      newVector[k] = nums1[i];
      i++;
      k++;
    }
    else
    {
      newVector[k] = nums2[j];
      j++;
      k++;
    }
  }
  // FOR REMAINING ELEMENTS
  if (i == n)
  { // this means array 1 khatam ho gyi hai.
    while (j < m)
    {
      newVector[k] = nums2[j];
      k++;
      j++;
    }
  }
  if (j == m)
  { // this means array 2 khatam ho gyi hai.
    while (i < n)
    {
      newVector[k] = nums1[i];
      i++;
      k++;
    }
  }
  return newVector;
}
