#include<iostream>
#include<vector>
using namespace std;
//Function for binary search 
int binarySearch(vector<int> &v,int target){
  int n = v.size();
  int low = 0;
  int high = n-1;
  while (low<=high)
  {
    int mid = low+(high-low)/2;
    if(v[mid] == target) return mid;
    else if(target < v[mid]) high = mid-1;
    else low = mid + 1;
  }
  return -1;
}
int main(){
  vector<int>v{1,2,3,4,5,6,7,8,9,10};
  cout<<binarySearch(v,2);
}