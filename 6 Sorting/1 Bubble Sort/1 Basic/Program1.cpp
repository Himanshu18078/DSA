#include<iostream>
#include<vector>
using namespace std;
/*
  Bubble Sort

  Definition:
  Bubble Sort is a simple sorting algorithm that repeatedly
  compares adjacent elements and swaps them if they are in
  the wrong order. After each pass, the largest unsorted
  element moves ("bubbles up") to its correct position.

  Example:
  5 4 3 2 1

  Pass 1 -> 4 3 2 1 5
  Pass 2 -> 3 2 1 4 5
  Pass 3 -> 2 1 3 4 5
  Pass 4 -> 1 2 3 4 5

  Time Complexity:
  Best Case    : O(n²)
  Average Case : O(n²)
  Worst Case   : O(n²)
  Stable Sorting as no relative order of the same element changes.
  Total swaps  = n(n-1)/2

  Space Complexity:
  O(1)  // In-place sorting
*/

void bubbleSort(vector<int> &arr){

  // Number of passes required = n - 1
  for(int i = 0; i < arr.size() - 1; i++){

    /*
      Compare adjacent elements.

      - i     : Last i elements are already sorted.
      - 1     : We compare arr[j] with arr[j + 1],
                so j must stop one position before
                the last valid index.
    */
    for(int j = 0; j < arr.size() - i - 1; j++){

      // If left element is greater than right element
      if(arr[j] > arr[j + 1]){

        // Swap them
        swap(arr[j], arr[j + 1]);
      }
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