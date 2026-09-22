// Program to move all the negative at the starting and all the positive to the end
#include<iostream>
#include<vector>
using namespace std;
void moveNegative(vector<int> &v){
  int i = 0;
  int j = v.size()-1;
  while(i<=j){
  if(v[i] < 0) i++;
  else if(v[j] > 0) j--;
  else{
    swap(v[i] , v[j]);
    i++;
    j--;
  }
  }
}
int main(){
  vector<int> v ={-1,43,324,-252,-552,435,-6};
  moveNegative(v);
  for(int i = 0; i < v.size(); i++){
    cout<<v[i]<<" ";
  }
  return 0;
}