// REVERSE A STACK USING AN VECTOR
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  cout<<"Current element at the top is : "<<st.top()<<endl;
  vector<int> v(st.size());
  while (st.size() > 0)
  {
    cout<<st.top()<<" ";
    v.push_back(st.top());
    st.pop();
  }
  cout<<endl;
  for(int i = 0; i < v.size();i++){
    st.push(v.at(i));
  }
  cout<<"Current element at the top is : "<<st.top()<<endl;
  return 0;
}