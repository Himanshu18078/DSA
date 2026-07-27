// Given a sorted integer array and an integer 'x', find the lower bound of the x;
#include<iostream>
#include<vector>
using namespace std;
// function to enter the vector
vector<int> enterVector(){
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
// function to get the lower bound
int lowerBound(const vector<int> &v , int x){
  int low = 0;
  int high = v.size() -1;
  while (low<= high)
  {
    int mid = low + (mid-low)/2;
    if(v[mid] == x) return v[mid-1];
    if(v[mid] > x ) high = mid - 1;
    if(v[mid] < x) return v[mid - 1]; 
  }
  return -1;
}