// REVERSE A STACK : Using 3 stacks
#include<iostream>
#include<stack>
using namespace std;
int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  cout<<"Current top : "<<st.top()<<endl;
  stack<int> temp;
  while(st.size() > 0){
    cout<<st.top()<<" ";
    temp.push(st.top());
    st.pop();
  }
  cout<<endl;
  stack<int>temp2;
  while (temp.size() > 0)
  {
    cout<<temp.top()<<" ";
    temp2.push(temp.top());
    temp.pop();
  }
  cout<<endl;
  while (temp2.size() > 0)
  {
    cout<<temp2.top()<<" ";
    st.push(temp2.top());
    temp2.pop();
  }
  cout<<endl;
  cout<<"Current top : "<<st.top()<<endl;
}