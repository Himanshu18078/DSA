// Program to remove all the element from the queue at even position

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
void removeEvenPostion(queue<int>&q){
  int n = q.size();
  for(int i = 0; i < n; i++){
    if(i%2 == 0){
      int x = q.front();
      q.pop();
      q.push(x);
    }else q.pop();
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
  removeEvenPostion(q);
  printQueue(q);
}