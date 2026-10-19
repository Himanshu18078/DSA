#include<iostream>
#include<vector>
using namespace std;
void runningSum(vector<int> &arr){
  for(int i = 1; i < arr.size(); i++){
    arr[i] = arr[i] + arr[i-1];
  }
}
int main(){
  vector<int> arr = {1,2,3,4,5,6};
  for(int num : arr){
    cout<<num<<" ";
  }
  cout<<endl;
  runningSum(arr);
  for(int num : arr){
    cout<<num<<" ";
  }
}