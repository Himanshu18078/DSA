#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int> v;
  v.push_back(66);
  v.push_back(45);
  v.push_back(55);
  v.push_back(75);
  // v.at(2) = 90;
  // cout<<v.at(2)<<endl;
  for(int i = 0; i < v.size() ;i++){
    cout<<v.at(i)<<" ";
  }
  cout<<endl;
  // SORTING
  sort(v.begin(),v.end());
  for(int i = 0; i < v.size() ;i++){
    cout<<v.at(i)<<" ";
  }
}