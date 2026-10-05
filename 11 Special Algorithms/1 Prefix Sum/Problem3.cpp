// Program to give sum of numbers between two indices
#include<iostream>
#include<vector>
using namespace std;
int sumBtween(vector<int> &v , int i , int j){
  
  for(int i = 1; i < v.size(); i++){
    v[i] = v[i] + v[i-1];
  }
  if(i == 0) return v[j];
  
  return v[j] - v[i-1];
}
int main(){
  vector<int>v = {1,2,3,4,5,6,7,8,9};
  cout<<sumBtween(v,0,4);
}