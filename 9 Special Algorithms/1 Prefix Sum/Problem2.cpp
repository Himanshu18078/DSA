// Check if array can be partitioned into two continious array of equal sum
#include<iostream>
#include<vector>
using namespace std;
int canPartition(vector<int> &arr){
  vector<int> preSum(arr.size());
  preSum[0] = arr[0];
  for(int i = 1 ; i < arr.size() ; i++){
    preSum[i] = preSum[i-1] + arr[i];
  };
  int index = -1;
  for(int i = 0; i < preSum.size() ; i++){
    if(preSum[i] * 2 == preSum [arr.size() - 1]){
      index = i;
      break;
    }
  }
  return index;
} 


vector<int> enterVector (){
  int size;
  cout<<"Please enter the size of the vector : ";
  cin>>size;
  vector<int>arr(size);
  for(int i = 0 ; i < arr.size();i++){
    cout<< i << " : ";
    cin>>arr[i];
  }
  return arr;
}
void printVector(const vector<int> &arr){
  for(int element : arr){
    cout<<element<<" ";
  }
  cout<<endl;
}
int main(){
  vector<int> arr = {1,2,3};
  printVector(arr);
  if(canPartition(arr) != -1){
    cout<<"Array can be partitioned \nIndex : "<<canPartition(arr)<<endl;
  }else{
    cout<<"Can't be partitioned";
  }
}