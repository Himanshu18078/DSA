// Maximum sum of subarray of size k
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
//function to find the sum of the window of size k
/*
 Sliding Window Iteration Bound
 ────────────────────────────────────────
 Loop runs while: i <= n - windowSize

 Why? The last valid window starts at index (n - windowSize).
 Starting any later would cause the window to exceed the array bounds.

 Example: n = 9, windowSize = 3
   Valid windows start at indices: 0, 1, 2, 3, 4, 5, 6
   Last valid start index = 9 - 3 = 6  ✓
   Index 7 onward = out-of-bounds window  ✗

 Total windows = n - windowSize + 1  (e.g., 9 - 3 + 1 = 7 windows)
*/

void findSumB(const vector<int> &arr , int windowSize){
  int n = arr.size();
  int maxSum = INT_MIN;
  int maxIndex = -1;
  for(int i = 0; i <= n - windowSize;i++){
    int sum = 0;
   for(int j = i; j < i+windowSize;j++){
       sum += arr[j]; 
   }
   if(maxSum < sum){
    maxSum = sum;
    maxIndex = i;
   }
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
  findSumB(arr,3);
}