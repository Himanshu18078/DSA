// Program to find Previous greatest element array
#include<iostream>
#include<vector>
using namespace std;
vector<int> previousGreatest(const vector<int>& nums) {
    vector<int> preGre;

    // For the first element, there is no previous element
    preGre.push_back(-1);

    // Keep track of the maximum value seen so far
    int currentMax = nums[0];

    // Start from index 1 because index 0 has no previous elements
    for (int i = 1; i < nums.size(); i++) {

        // The greatest element before nums[i]
        preGre.push_back(currentMax);

        // Update the maximum seen so far
        if (nums[i] > currentMax) {
            currentMax = nums[i];
        }
    }

    return preGre;
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
  vector<int> newVector = previousGreatest(nums);
  printVector(newVector);
}