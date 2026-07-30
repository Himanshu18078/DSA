// Given a sorted array of n elements and a target 'x'.Find the first occurrence of 'x' in the array. If 'x' does not exists return -1.
#include<iostream>
#include<vector>
using namespace std;
//Function
int firstOccurance(vector<int> &v, int target){
  int n = v.size();
  int low = 0;
  int high = n-1;
  while(low<= high){
    int mid = low + (high - low)/2;
    if(target == v[mid]){
      if(v[mid-1] == target){
        high = mid-1;
      }
      else{
        return mid;
      }
    }
    else if(target < v[mid]) high = mid -1;
    else low = mid + 1;
  }
  return -1;
}
int main(){
  vector<int> v {1,2,2,3,3,3,3,3,4,4,5,8,9};
  cout<<firstOccurance(v,10);
  return 0;
}
  
