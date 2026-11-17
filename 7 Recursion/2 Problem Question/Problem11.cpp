// Program to print the subset of the array
#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int> nums){
  for(int num : nums){
    cout<<num<<" ";
  }
  cout<<endl;
}
void printSubset(vector<int> arr ,int currIndex , vector<int> ans){
  if(currIndex == arr.size()){
    printVector(ans);
    return;
  }
  printSubset(arr , currIndex+1 , ans);
  ans.push_back(arr[currIndex]);
  printSubset(arr , currIndex+1 , ans);
}
int main(){
  printSubset({1,2,3,4} , 0 , {});
}