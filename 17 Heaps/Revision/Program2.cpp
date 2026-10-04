// Program to find kth largeset element in an array
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int kthLargestElement(const vector<int> &v , int k){
  priority_queue<int , vector<int> , greater<int>> pq; // Min heap
  for(int i = 0; i < v.size() ; i++){
    pq.push(v[i]);
    if(pq.size() > k) pq.pop();
  }
  return pq.top();
}
int main(){
  vector<int> v ={1,35,6,2,65,46,4};
  cout<<kthLargestElement(v , 4);
}