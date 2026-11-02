#include<iostream>
#include<stack>
using namespace std;
// Function to print the stack using recursion
void printStack(stack<int> st){
  if(st.empty()) return;
  int ele = st.top();
  st.pop();
  printStack(st);
  cout<<ele<<" ";
}
int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  st.push(60);
  printStack(st);
}