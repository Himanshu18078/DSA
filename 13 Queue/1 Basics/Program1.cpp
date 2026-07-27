#include<iostream>
#include<queue>
using namespace std;
//function to print the queue
void printQueue(queue<int> &q){
  for(int i = 0; i < q.size() ;i++){
    int x = q.front();
    cout<<x<<" ";
    q.pop();
    q.push(x);
  }
  cout<<endl;
}
int main(){
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  printQueue(q);
  q.pop();
  printQueue(q);
}