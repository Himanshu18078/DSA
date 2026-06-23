// Push all the zeros at the end while mainting the relative order of other element
#include<iostream>
#include<vector>
using namespace std;
// bubble sort to push all the element at the end
void bubbleSort(vector<int> &arr){
  for(int i  = 0;i < arr.size() -1 ; i++){
    bool swaped = false;
    for(int j = 0; j < arr.size()-1-i ;j++){
      if(arr[j] == 0 && arr[j+1] != 0){
        swap(arr[j],arr[j+1]);
        swaped = true;
      }
    }
    if(!swaped){
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