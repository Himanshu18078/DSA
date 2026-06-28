// 238. Product of Array Except Self
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
// Check if array can be partitioned into two continious array of equal sum
#include <iostream>
#include <vector>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums)
{
  vector<int> preMul(nums.size());
//   vector<int> sufMul(nums.size());
//   vector<int> result(nums.size());

  // filling the value of the pre mul
  preMul[0] = 1;
  int m = nums[0];
  for(int i = 1; i < nums.size() ; i++){
    preMul[i] = m;
    m *= nums[i];
  }
  //filling the value of the suffix mul
  int n = nums.size() - 1;
//   sufMul[n] = 1;
  int sm = nums[n];
  for(int i = n-1 ; i >= 0 ;i--){
    preMul[i] *=  sm;
    sm *= nums[i];
  }
//   for(int i = 0;i < nums.size() ; i++){
//     preMul[i] = preMul[i] * sufMul[i];
//   }
  return preMul;
}

vector<int> enterVector()
{
  int size;
  cout << "Please enter the size of the vector : ";
  cin >> size;
  vector<int> arr(size);
  for (int i = 0; i < arr.size(); i++)
  {
    cout << i << " : ";
    cin >> arr[i];
  }
  return arr;
}
void printVector(const vector<int> &arr)
{
  for (int element : arr)
  {
    cout << element << " ";
  }
  cout << endl;
}
int main()
{
  vector<int> arr = {1, 2, 3};
  printVector(arr);
}