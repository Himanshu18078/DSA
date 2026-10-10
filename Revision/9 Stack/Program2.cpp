#include<iostream>
#include<stack>
#include<vector>
using namespace std;
// Function to print the stack (Reverse Order as stack follows LIFO)
void printStackRev(stack<int> st){
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }
  cout<<endl;
}
// Function to print the satck in same order
void printStack(stack<int> st){
  stack<int> demo;
  while(!st.empty()){
    demo.push(st.top());
    st.pop();
  }
  while(!demo.empty()){
    cout<<demo.top()<<" ";
    demo.pop();
  }
  cout<<endl;
}
// Fucntion to reverse the stack
void reverseStack(stack<int> &st){
  stack<int> demo1;
  stack<int> demo2;
  while(!st.empty()){
    demo1.push(st.top());
    st.pop();
  }
  while(!demo1.empty()){
    demo2.push(demo1.top());
    demo1.pop();
  }
  while(!demo2.empty()){
    st.push(demo2.top());
    demo2.pop();
  }
}
//function to reverse the stack using an vector
void reverseStack2(stack<int>&st){
  vector<int> v;
  while(!st.empty()){
    v.push_back(st.top());
    st.pop();
  }
  int n = v.size();
  int i = 0;
  while(i < n){
    st.push(v[i++]);
  }
}
int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  printStack(st);
  reverseStack2(st);
  printStack(st);
}