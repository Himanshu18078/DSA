// Traversing an array using recursion
#include<iostream>
#include<vector>
using namespace std;
/*
void traverseArray(vector<int> v , int size){
  if(size == v.size()) return;
  cout<<v[size]<<" ";
  traverseArray(v , size+1);
}
*/

void traverseArray(int arr[] , int currIndex , int size){
  if(currIndex == size) return;
  cout<<arr[currIndex]<<" ";
  traverseArray(arr , currIndex+1 , size);
}
int main(){
  // vector<int> v = {1,2,3,4,5,6,7,8,9,10};
  // traverseArray(v , 0);

  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  traverseArray(arr , 0 , 10);
}