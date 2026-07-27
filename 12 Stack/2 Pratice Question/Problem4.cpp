// Printing a stack using recursion
#include<iostream>
#include<stack>
using namespace std;
void printStackRev(stack<int> &st){
  if(st.size() == 0)return;
  int x = st.top();
  cout<<x<<" ";
  st.pop();
  printStackRev(st);
  st.push(x);
}
void printStack(stack<int> &st){
  if(st.size() == 0)return;
  int x = st.top();
  st.pop();
  printStack(st);
  cout<<x<<" ";
  st.push(x);
}
int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  printStackRev(st);
  cout<<endl;
  printStack(st);
}