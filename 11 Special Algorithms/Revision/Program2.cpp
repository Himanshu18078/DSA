// Program to check if the array can be partitioned into 2 ocntinious arrays of equal sum
#include<iostream>
#include<vector>
using namespace std;
int canPartition(vector<int> &arr){
  for(int i = 1; i < arr.size(); i++){
    arr[i] = arr[i] + arr[i-1]; 
  }

  int index = -1;
  
  for(int i = 0; i < arr.size() ; i++){
    if(arr[i] * 2 == arr [arr.size() - 1]){
      index = i;
      break;
    }
  }
  return index;
}
int main(){
  vector<int> arr = {1,2,3};
  int result  = canPartition(arr);
  if(result != -1){
    cout<<"Array can be partitioned \nIndex : "<<result<<endl;
  }else{
    cout<<"Can't be partitioned";
  }
}