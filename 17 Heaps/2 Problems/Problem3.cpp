// Program to sort a nearly sorted array
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int sort(vector<int> &v , int k){
  priority_queue<int , vector<int> , greater<int>> pq;
  for(int i = 0; i < k; i++){
    pq.push(v[i]);
  }
  for(int i = 0; i < v.size(); i++){
    v[i] = pq.top();
    pq.pop();
    if(i < v.size()) pq.push(v[k+i]);
  }
}
int main(){
  vector<int> v = {6,5,3,2,8,10,9};
  for(int ele:v){
    cout<<ele<<" ";
  }
  cout<<endl;

  sort(v,4);

  for(int ele:v){
    cout<<ele<<" ";
  }
  return 0;
}