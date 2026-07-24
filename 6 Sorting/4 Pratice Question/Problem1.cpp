// Given an array with N distinct elements, convert the given array to a from where all element are in the range from 0 to N-1. The order of element is the same i.e., 0 is placed in the place of the second smallesst element , 1 is placed for the second smallest element ,..N-1 is placed for the largest element
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
void solution(vector<int> &arr){
  vector<int> v(arr.size(),0);
  int minIndex = -1;
  int x = 0;

  for(int i = 0 ; i < v.size();i++){
    int min = INT_MAX;

    for(int j = 0 ; j < v.size();j++){
      if(v[j] == 1) continue;

      if(min > arr[j]){
        min = arr[j];
        minIndex = j;
      }
    }

    arr[minIndex] = x;
    x++;
    v[minIndex] = 1;
  }
}
vector<int> inputVector(){
  cout<<"Pleae enter the size of the vector : ";
  int size;
  cin>>size;
  vector<int> arr(size);
  for(int i = 0; i < size;i++){
    cout<<i<<" : ";
    cin>>arr[i];
  }
  return arr;
}

void printVector(const vector<int> &arr){
  for(int ele : arr){
    cout<<ele<<" ";
  }
}
int main(){
  vector<int> arr = inputVector();
  cout<<"Vector : "<<endl;
  printVector(arr);
  vector<int> indecies;
  solution(arr);
  cout<<"Indecies : "<<endl;
  printVector(arr);
}