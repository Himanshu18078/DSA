// Program to move all the negative number at the begning and all the positive number at the end
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
void sort(vector<int> &nums){
  if( nums.size() == 1) return;
  int i = 0;
  int j = nums.size() - 1;
  while(i < j){
    if(nums.at(i) < 0) i++;
    else if(nums.at(j) > 0) j--;
    else{
      int temp = nums.at(i);
      nums.at(i) = nums.at(j);
      nums.at(j) = temp;
      i++;
      j--;
    }
  }
}
int main()
{
  vector<int> nums = enterVector();
  printVector(nums);
  printVector(nums);
}