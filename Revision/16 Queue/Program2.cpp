// Program to reverse a queue
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void printQueue(queue<int>q){
  int n = q.size();
  for(int i = 0; i < n ;i++){
    int x = q.front();
    q.pop();
    cout<<x<<" ";
    q.push(x);
  }
  cout<<endl;
}
void revereseQueue(queue<int> &q){
  int n = q.size();
  stack<int>s;
  for(int i = 0; i < n; i++){
    s.push(q.front());
    q.pop();
  }
  while(!s.empty()){
    q.push(s.top());
    s.pop();
  }
}
int main(){
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);
  printQueue(q);
  revereseQueue(q);
  printQueue(q);
}