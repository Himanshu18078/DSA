// Maximum sum of subarray of size k using SLIDING WINDOW ALGORITHM
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void findSum(const vector<int> &arr , int windowSize){
  int n = arr.size();
  int maxIndex = 0;
  
  int currentSum = 0;
  for(int i = 0 ; i < windowSize;i++){
    currentSum += arr[i];
  }
  int maxSum = currentSum;
  int i = 1;
  int j = windowSize ;
  while(j < n){
    currentSum = currentSum + arr[j] - arr[i-1];
    if(maxSum < currentSum){
      maxSum = currentSum;
      maxIndex = i;
    }
    i++;
    j++;
  }

  cout<<"Max sum of window "<<windowSize<<" at index "<< maxIndex<< " is : "<<maxSum<<endl;
}

// Program to take array as input
vector<int> enterArray(){
  cout<<"Please enter the size of the array : ";
  int size;
  cin>>size;
  vector<int> arr(size);
  for(int i = 0; i < size;i++){
    cout<< i<<" : ";
    cin>>arr[i];
  }
  return arr;
}
// Program to print array
void printArray(const vector<int> &arr){
  for(int element :  arr){
    cout<<element<<" ";
  }
  cout<<endl;
}
int main(){
  vector<int> arr = {7,1,2,5,8,4,9,3,6};
  printArray(arr);
  findSum(arr,3);
}