#include <iostream>
#include <stack>
#include <queue>
using namespace std;
// Function to print the queue
void printQueue(queue<int> &q)
{
  int n = q.size();
  for (int i = 0; i < n; i++)
  {
    int x = q.front();
    cout << x << " ";
    q.pop();
    q.push(x);
  }
  cout << endl;
}
// Function to reverse a queue
void reverseQueue(queue<int> &q)
{
  int n = q.size();
  stack<int> s;
  for (int i = 0; i < n; i++)
  {
    int x = q.front();
    s.push(x);
    q.pop();
  }
  for (int i = 0; i < n; i++)
  {
    int x = s.top();
    q.push(x);
    s.pop();
  }
}
// Progarm to remove all the element present at even position in queue
queue<int> removeEvenIndex(queue<int> q)
{
  int n = q.size();
  for(int i = 0 ; i < n; i++){
    if(i %2 == 0) {
      q.pop();
    }else{
      int x = q.front();
      q.pop();
      q.push(x);
    };
  }
  return q;
}
int main()
{
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);
  printQueue(q);
  reverseQueue(q);
  printQueue(q);
  reverseQueue(q);
  queue<int> oddIndexed = removeEvenIndex(q);
  printQueue(oddIndexed);
}