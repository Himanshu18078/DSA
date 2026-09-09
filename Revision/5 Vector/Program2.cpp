#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printVector(vector<int> v){
  for(int ele : v){
    cout<<ele<<" ";
  }
  cout<<endl;
}
void sortVector(vector<int> v){
  sort(v.begin() , v.end());
  printVector(v);
}

int main(){
  vector<int> v = {1,6,7,3,5};
  printVector(v);
  sortVector(v);
  printVector(v);
}