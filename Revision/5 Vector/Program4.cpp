#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reversePartOfArray(vector<int> &v , int i, int j){
  while(i<=j){
    swap(v[i] , v[j]);
    i++;
    j--;
  }
}
void printVector(const vector<int> &v){
  for(auto ele : v){
    cout<<ele<<" ";
  }
  cout<<endl;
}
int main(){
  vector<int> v = {1,2,3,4,5,6,7,8,9,10};
  printVector(v);
  reversePartOfArray(v , 2 , 6);
  printVector(v);
}