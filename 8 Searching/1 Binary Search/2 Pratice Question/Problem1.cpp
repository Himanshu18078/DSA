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
void lowerBound(vector<int> &v , int target){
  int n = v.size();
  int low = 0;
  int high = n-1;
  bool flag = false;
  while(low<=high){
    int mid = low + (high-low)/2;
    if(v[mid] == target){
      flag = true;
      cout<<v[mid-1];
      break;
    }
    else if(target > v[mid]) low = mid+1;
    else high = mid - 1;
  }
  if(flag == false){
    cout<<v[high];
  }
}
int main(){
  vector<int> v{1,2,4,5,9,15,18,21,24};
  lowerBound(v,20);
}