// Program to reverse the zeros and ones array
#include <iostream>
#include <vector>
using namespace std;
vector<int> enterVector()
{
  vector<int> v;
  int size;
  cout << "Please enter the size of the vector : ";
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int num;
    cout << "Please enter element " << i << " element : ";
    cin >> num;
    v.push_back(num);
  }
  return v;
}
void printVector(vector<int> &v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v.at(i) << " ";
  }
  cout << endl;
}
void sortMethod1(vector<int> &nums)
{
  int n = nums.size();
  int noO = 0;
  int noZ = 0;
  for (int i = 0; i < n; i++)
  {
    if (nums.at(i) == 0)
    {
      noZ++;
    }
    else
    {
      noO++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (i < noZ)
      nums.at(i) = 0;
    else
      nums.at(i) = 1;
  }
}
void sortMethod2(vector<int> &nums)
{
  int i = 0;
  int j = nums.size() - 1;
  while (i < j)
  {
    if (nums[i] == 0)
    {
      i++;
    }
    else if (nums[j] == 1)
    {
      j--;
    }
    else
    {
      // nums[i] == 1 and nums[j] == 0
      // swap(nums[i], nums[j]);
      nums.at(i) =0;
      nums.at(j) =1;
      i++;
      j--;
    }
  }
}
int main()
{
  vector<int> nums = enterVector();
  printVector(nums);
  sortMethod2(nums);
  printVector(nums);
}