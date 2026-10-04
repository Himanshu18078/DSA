// Program to sort nearly sorted array
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void sort(vector<int> &v , int k){
  priority_queue<int , vector<int> , greater<int>> pq;
  int idx = 0;
  for(int i = 0; i < v.size() ; i++){
    pq.push(v[i]);
    if(pq.size() > k){
      v[idx++] = pq.top();
      pq.pop();
    }
  }
  while(!pq.empty()){
    v[idx++] = pq.top();
    pq.pop();
  }
}
int main(){
  vector<int> v = {6,5,3,8,10,9};
  for(int ele : v){
    cout<<ele<<" ";
  }
  cout<<endl;
  sort(v,3);
  for(int ele : v){
    cout<<ele<<" ";
  }
}