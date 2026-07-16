#include<iostream>
#include<vector>
using namespace std;
/*
  Insertion Sort

  Definition:
  - Insertion Sort divides the array into two parts:
    1. Sorted part
    2. Unsorted part
  - It takes one element from the unsorted part and
    inserts it into its correct position in the sorted part.
  - Similar to how we sort playing cards in our hands.

  Example:
  5 4 3 2

  Pass 1 -> 4 5 3 2
  Pass 2 -> 3 4 5 2
  Pass 3 -> 2 3 4 5

  Time Complexity:
  Best Case    : O(n)    // Already sorted
  Average Case : O(n²)
  Worst Case   : O(n²)   // Reverse sorted

  Space Complexity:
  O(1)  // In-place sorting

  Where is it used?
  - Small datasets
  - Nearly sorted arrays
  - Hybrid sorting algorithms (e.g., TimSort)
  - When simplicity is preferred
*/

void insertionSort(vector<int> &arr){

  // Start from the second element
  // because the first element is
  // already considered sorted
  for(int i = 1; i < arr.size(); i++){

    // Store the current element
    int key = arr[i];

    // Start comparing from the
    // previous element
    int j = i - 1; 

    // Shift larger elements one
    // position to the right
    while(j >= 0 && arr[j] > key){

      arr[j + 1] = arr[j];
      j--;
    }

    // Insert the key at its
    // correct position
    arr[j + 1] = key;
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
  insertionSort(arr);

  // this is for each loop
  for(int ele : arr){
    cout<<ele<<" ";
  }
  cout<<endl;
}