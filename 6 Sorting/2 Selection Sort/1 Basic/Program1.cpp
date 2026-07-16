#include<iostream>
#include<vector>
using namespace std;
/*
  Selection Sort

  Definition:
  - Selection Sort divides the array into two parts:
    1. Sorted part
    2. Unsorted part
  - In each pass, it finds the smallest element from
    the unsorted part and places it at the beginning
    of the unsorted part.
  - After every pass, one element reaches its
    correct sorted position.

  Example:
  64 25 12 22 11

  Pass 1 -> 11 25 12 22 64
  Pass 2 -> 11 12 25 22 64
  Pass 3 -> 11 12 22 25 64
  Pass 4 -> 11 12 22 25 64

  Time Complexity:
  Best Case    : O(n²)
  Average Case : O(n²)
  Worst Case   : O(n²)
  Total number of Sort  : n - 1; 
  Unatable sorting algorithm as realtive order of the same element may change
  Space Complexity:
  O(1)   // In-place sorting
*/

void selectionSort(vector<int> &arr){

  // Traverse the array
  // Each pass fixes one element
  // at its correct position
  for(int i = 0; i < arr.size() - 1; i++){

    // Assume the first element of the
    // unsorted part is the minimum
    int minIndex = i;

    // Find the actual minimum element
    // in the remaining unsorted part
    for(int j = i + 1; j < arr.size(); j++){

      // Update minIndex when a smaller
      // element is found
      if(arr[j] < arr[minIndex]){
        minIndex = j;
      }
    }

    // Place the minimum element at its
    // correct sorted position
    swap(arr[i], arr[minIndex]);
  }
}

vector<int> enterVector(){
  int size;
  cout<<"Please enter the size of the vector : ";
  cin>>size;
  vector<int> arr(size);
  for(int i = 0; i < size ;  i++){
    cout<<i<<" : ";
    cin>>arr[i];
  }
  return arr;
}
int main(){
  vector<int> arr = enterVector();
  selectionSort(arr);

  // this is for each loop
  for(int ele : arr){
    cout<<ele<<" ";
  }
  cout<<endl;
}