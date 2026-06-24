// PROBLEM 169 : MAJORITY PROBLEM
#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums) {
        insertionSort(nums);
        return nums[nums.size()/2];
    }
void insertionSort(vector<int> & arr){
  for(int i = 1; i < arr.size() ;i++){
    int key = arr[i];
    int j = i -1;
    while(j >= 0 && arr[j] > key){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = key;
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
  insertionSort(arr);
  int index =( arr.size() / 2) +1;
  int max;
  if(arr[0] == arr[index]){
    max = arr[0];
  }else{
    max = arr[arr.size() -1];
  }
  cout<<"Max element is : "<<max<<endl;
}