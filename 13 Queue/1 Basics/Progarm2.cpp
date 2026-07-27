// Program to reverese the queue using stack
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
//function to print the queue
void printQueue(queue<int> &q){
  for(int i = 0;i < q.size() ; i++){
    int x = q.front();
    cout<<x<<" ";
    q.pop();
    q.push(x);
  }
  cout<<endl;
}
//function to reverse the queue
//function to reverse the queue
void reverseQueue(queue<int> &q){
  stack<int>s;
  int size = q.size();

  for(int i = 0; i < size;i++){
    int x = q.front();
    q.pop();
    s.push(x);
  }

  for(int i = 0; i < size;i++){
    int x = s.top();
    q.push(x);
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
  printQueue(q);
  reverseQueue(q);
  printQueue(q);
}