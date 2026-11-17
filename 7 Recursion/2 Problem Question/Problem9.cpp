#include<iostream>
#include<vector>
using namespace std;
void removeOnes(vector<int>&v , int currIndex , vector<int> &ans){
  if(v.size() == currIndex) return;
  int num = v[currIndex];
  if(num == 1) removeOnes(v , currIndex+1 , ans);
  else {
    ans.push_back(num);
    removeOnes(v , currIndex+1 , ans);
  }
}
int main(){
  vector<int> v = {1,23,2,1,141,4,14,1,14,124,551,1511,1};
  vector<int> result;
  removeOnes(v , 0 , result);
  for(int ele : result){
    cout<<ele<<" ";
  }
  cout<<endl;

  return 0;
}