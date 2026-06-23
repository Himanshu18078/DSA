#include<iostream>
#include<vector>
using namespace std;
// Optimization:
// Normally Bubble Sort performs all (n - 1) passes even if
// the array becomes sorted before that.
//
// We use a boolean variable 'swapped' to track whether any
// swap occurred during the current pass.
//
// If no swap occurs in a pass, it means every adjacent pair
// is already in the correct order, so the array is sorted.
//
// In that case, we stop the algorithm early using:
// if(!swapped) return;
//
// This improves the Best Case Time Complexity:
// Before Optimization : O(n²)
// After Optimization  : O(n)
//
// Example:
// Array: 1 2 3 4 5
//
// Pass 1:
// No swaps occur → swapped remains false
//
// Since the array is already sorted,
// the algorithm terminates immediately.
void bubbleSort(vector<int> &arr){
  for(int i = 0; i < arr.size() - 1; i++){
    bool swapped = false;
    for(int j = 0; j < arr.size() - i - 1; j++){

      if(arr[j] > arr[j + 1]){
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    // If no swaps occurred in this pass,
    // the array is already sorted.
    if(!swapped){
      return;
    }
  }
}
vector<int> enterVector(){
  int size;
  cout<<"Please enter the size of the vector : ";
  cin>>size;
  vector<int> arr(size);
  for(int i = 0; i < size;  i++){
    cout<<i<<" : ";
    cin>>arr[i];
  }
  return arr;
}
int main(){
  vector<int> arr = enterVector();
  bubbleSort(arr);

  for(int i = 0; i < arr.size();i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}