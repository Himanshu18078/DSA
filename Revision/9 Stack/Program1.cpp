#include<iostream>
#include<stack>
using namespace std;
//fucntion to print the stack
// void printStack(stack<int> st){
//   while (!st.empty())
//   {
//     cout<<st.top()<<" ";
//     st.pop();
//   }
// }

// function to print the stack in reverse order
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