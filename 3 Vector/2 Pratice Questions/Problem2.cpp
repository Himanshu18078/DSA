// Program to copy the content of one array into another array in the reverse oreder.
#include <iostream>
#include <vector>
using namespace std;
// Function to take input a vector
vector<int> inputVector()
{
  vector<int> v;
  cout << "Please enter the size of the vector : ";
  int size;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int num;
    cout << "Element at index " << i << " : ";
    cin >> num;
    v.push_back(num);
  }
  return v;
}
// Function to print the vector
void printVector(const vector<int> &v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v.at(i) << " ";
  }
  cout << endl;
}
// Function to copy one array into another array in reverse order
vector<int> reverseCopy(const vector<int> &v)
{
  vector<int> b;
  // Here instead of looping in reverse we can use another method also
  // for(int i = v.size() - 1; i >= 0 ; i--){
  //   b.push_back(v.at(i));
  // }
  /*
  if i is the starting index and j is the end index then
  i + j = size - 1; size = size of the vector
  so j = size - i - 1;
  */
  for (int i = 0; i < v.size(); i++)
  {
    int j = v.size() - i - 1;
    b.push_back(v[j]);
  }
  return b;
}
int main()
{
  vector<int> v = inputVector();
  cout << "Original Vector : ";
  printVector(v);
  cout << "Reversed vector : ";
  vector<int> reversed = reverseCopy(v);
  printVector(reversed);
}