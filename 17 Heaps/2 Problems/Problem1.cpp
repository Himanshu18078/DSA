// find kth smallest element in a given array
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int KthSmallestElement(vector<int> v, int k){
  priority_queue<int> pq;
  int n = v.size();
  for(int i = 0; i < v.size() ;i++){
    pq.push(v[i]);
    if(pq.size() > k) pq.pop();
  }
  return pq.top();
}
int main(){
  vector<int> v = {2,452,52,5,35,637,6};
  int element = KthSmallestElement(v , 3);
  cout<<element<<endl;
}
  
