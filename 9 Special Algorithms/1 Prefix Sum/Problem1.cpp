// Program to find an array of Prefix sum
#include<iostream>
#include<vector>
using namespace std;
vector<int> preSum(const vector<int> &arr){
  vector<int>prefixSum(arr.size());
  prefixSum[0] = arr[0];
  for(int i = 1; i < arr.size();i++){
    prefixSum[i] = prefixSum[i-1] + arr[i];
  }
  return prefixSum;
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
  vector<int> arr = enterVector();
  printVector(arr);
  vector<int> prefixSum = preSum(arr);
  printVector(prefixSum);
  
}