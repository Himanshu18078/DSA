#include<iostream>
#include<stack>
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

int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  cout<<st.top()<<endl;
  printStackRev(st);
  printStack(st);
}