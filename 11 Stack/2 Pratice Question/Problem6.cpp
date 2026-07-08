// Reversing a stack
// Program to push element at the bottom
// Printing a stack using recursion
#include<iostream>
#include<stack>
using namespace std;
//function to push at the bottom
void pushAtBottom(stack<int> &st,int val){
  if(st.size() == 0){
    st.push(val);
    return;
  };
  int x = st.top();
  st.pop();
  pushAtBottom(st,val);
  st.push(x);
}
//Function to reverse a stack
void reverse(stack<int> &st){
  if(st.size() == 0) return;
  int x = st.top();
  st.pop();
  reverse(st);
  pushAtBottom(st,x);
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
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  printStack(st);
  pushAtBottom(st,10);
  cout<<endl;
  printStack(st);
  reverse(st);
  cout<<endl;
  printStack(st);
}