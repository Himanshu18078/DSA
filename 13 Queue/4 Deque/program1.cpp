#include<iostream>
#include<deque>
using namespace std;
void printQueue(deque<int>q){
  int n = q.size();
  for(int i = 0; i < n ;i++){
    int x = q.front();
    q.pop_front();
    cout<<x<<" ";
    q.push_back(x);
  }
  cout<<endl;
}
int main(){
  deque<int> dq;
  dq.push_back(10);
  dq.push_front(5);
  dq.push_back(20);
  printQueue(dq);
}
