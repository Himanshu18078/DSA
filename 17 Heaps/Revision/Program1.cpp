#include<iostream>
#include<queue>
#include<vector>
using namespace std;
// Function to return kth smallest element
int kthSmallestElement(const vector<int>&v , int k){
  priority_queue<int> pq;
  for(int i = 0; i < v.size() ;i++){
    pq.push(v[i]);
    if(pq.size() > 3) pq.pop();
  }
  return pq.top();
}
int main(){
  vector<int> v = {5,2,3,4,6,9};
  cout<<kthSmallestElement(v , 3)<<endl;
  return 0;
}