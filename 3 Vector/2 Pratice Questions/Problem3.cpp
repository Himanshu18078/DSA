// Program to reverse the array without using another vector
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
// Function to reverse the array
void reverse(vector<int> &v)
{
  /*
  This is done ussing for loop
  int i = 0;
  int j = v.size() - 1;
  while(i <= j){
    int temp = v.at(i);
    v.at(i) = v.at(j);
    v.at(j) = temp;
    i++;
    j--;
  }
  */
  // Same using for loop
  for (int i = 0, j = v.size() - 1; i <= j; i++,j--) // we can give multiple initilization , condition and updation
  {
    int temp = v.at(i);
    v.at(i) = v.at(j);
    v.at(j) = temp;
  }
  return;
}
int main()
{
  vector<int> v = inputVector();
  cout << "Original Vector : ";
  printVector(v);
  cout << "Reversed vector : ";
  reverse(v);
  printVector(v);
}