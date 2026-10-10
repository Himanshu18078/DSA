// Function to push element at any index
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void printStack(stack<int> st){
  if(st.empty()) return;
  st.pop();
  printStack(st);
  cout<<st.top()<<" ";
}
//
void printStack2(stack<int> &st){
  if(st.empty()) return;
  int x = st.top();
  st.pop();
  printStack2(st);
  st.push(x);
  cout<<st.top()<<" ";
}
int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  printStack2(st);
}