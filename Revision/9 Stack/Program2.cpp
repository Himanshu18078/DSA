#include<iostream>
#include<stack>
using namespace std;
// Function to print the stack
void printStack(stack<int> st){
  stack<int> temp;
  while (!st.empty())
  {
    temp.push(st.top());
    st.pop();
  }
  while (!temp.empty())
  {
    cout<<temp.top()<<" ";
    temp.pop();
  }
}

// Function to push the element in the bottom of the stack

void addAtTheBottom(stack<int> &st , int num){
  stack<int> temp;
  while (!st.empty())
  {
    temp.push(st.top());
    st.pop();
  }
  st.push(num);
  while (!temp.empty())
  {
   st.push(temp.top());
   temp.pop();
  }
}
int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  st.push(60);
  cout<<"Before : "<<endl;
  printStack(st);
  cout<<endl;
  addAtTheBottom(st,5);
  cout<<"After : "<<endl;
  printStack(st);
}