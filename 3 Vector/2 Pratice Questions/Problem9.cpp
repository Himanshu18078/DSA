// Program to find Next Greatest
#include<iostream>
#include<vector>
using namespace std;
vector<int> nextGreatest(const vector<int>& nums) {
    if (nums.empty()) return {};
    int n = nums.size();
    vector<int> nexGre(n);
    // Last element has no elements to its right
    nexGre[n - 1] = -1;
    // Maximum value seen so far from the right
    int currentMax = nums[n - 1];
    // Traverse from right to left
    for (int i = n - 2; i >= 0; i--) {
        // Greatest element to the right of nums[i]
        nexGre[i] = currentMax;
        // Update maximum seen so far
        if (nums[i] > currentMax) {
            currentMax = nums[i];
        }
    }
    return nexGre;
}

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
};
int main(){
   vector<int> nums = enterVector();
  printVector(nums);
  vector<int> newVector = nextGreatest(nums);
  printVector(newVector);
}