// First Negative number in every window of size k 
#include<iostream>
#include<vector>
using namespace std;
vector<int> firstNegativeElement(const vector<int> &arr , int windowSize){

  vector<int> result(arr.size() - windowSize + 1);
  int negativeIndex = -1;
  for(int i = 0; i < windowSize;i++){
    if(arr[i] < 0){
      negativeIndex = i;
      break;
    }
  }
  result[0] = arr[negativeIndex];
  int i = 1;
  int j = windowSize;
  while(j < arr.size()){
    if(negativeIndex >= i){
      result[i] = arr[negativeIndex];
    }else{
      for(int k = i; k < j;k++){
        if(arr[k] < 0){
          negativeIndex = k;
          break;
        }
      }
      result[i] = arr[negativeIndex];
    }
    i++;
    j++;
  }
  return result;
}
void printArray(const vector<int> &arr){
  for(int element : arr){
    cout<<element<<" ";
  }
  cout<<endl;
}
int main(){
  vector<int> arr = {2,-3,4,4,-7,-1,4,-2,6};
  printArray(arr);
  printArray(firstNegativeElement(arr,3 ));
}