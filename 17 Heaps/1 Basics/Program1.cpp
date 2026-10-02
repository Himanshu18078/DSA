#include<iostream>
#include<queue>
using namespace std;
int main(){
  //This is max Heap By default is java
  // priority_queue<int> pq;
  // pq.push(10);
  // pq.push(2);
  // pq.push(-6);
  // pq.push(81);
  // cout<<pq.top()<<endl;
  // pq.pop();
  // cout<<pq.top()<<endl;
  // pq.pop();
  // cout<<pq.top()<<endl;
  // The following in min heap in java
  priority_queue<int , vector<int> , greater<int>> pq;
  pq.push(10);
  pq.push(2);
  pq.push(-6);
  pq.push(81);
  cout<<pq.top()<<endl;
  pq.pop();
  cout<<pq.top()<<endl;
}                           