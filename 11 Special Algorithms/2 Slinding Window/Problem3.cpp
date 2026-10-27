// First Negative number in every window of size k 
#include<iostream>
#include<vector>
using namespace std;
/*
vector<int> firstNegativeElement(vector<int> arr , int windowSize){
  vector<int> result(arr.size() - windowSize + 1);

  for(int i = 0; i < result.size() ; i++){
    for(int j = i; j < i+windowSize ;  j++){
      if(arr[j] < 0) {
        result[i] = arr[j];
        break;
      }
    }
  }
  return result;
}
*/


vector<int> firstNegativeElement(vector<int> arr , int windowSize){
  vector<int> result(arr.size() - windowSize + 1);
  int index = 0;
  int negative = 0;
  for(int i = 0; i < windowSize ; i++){
    if(arr[i] < 0){
      negative = arr[i];
      index = i;
      break;
    }
  }

  result[0] = negative;
  int i = 1;
  int j = i + windowSize - 1;

  while (j < arr.size())
  {
    if(index >= i && index <= j){
      result[i] = negative;
    }
    else{
      for(int k = i; k <= j ; k++){
        if(arr[k] < 0){
        negative = arr[k];
        index = k;
        break;
       }
      }
      result[i] = negative; 
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