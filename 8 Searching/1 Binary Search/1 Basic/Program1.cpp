#include <iostream>
#include <vector>
using namespace std;
vector<int> enterVector()
{
  int size;
  cout << "Please enter the size of the vector: ";
  cin >> size;
  vector<int> v(size);
  for (int i = 0; i < size; i++)
  {
    cout << "Please enter " << i + 1 << " element: ";
    cin >> v[i];
  }
  return v;
}
// function for binary search
int binarySearch(const vector<int> &v ,int target){
  int low = 0;
  int high = v.size() -1;
  while(low<= high){
    int mid = low + (high - low)/ 2;
    if(v[mid] == target)  return mid;
    else if(target > v[mid]) low = mid +1;
    else high = mid -1;
  }
  return -1;
}
int main()
{
  vector<int> v = enterVector();
  cout<<"Found the element at index : "<<binarySearch(v,2);
}