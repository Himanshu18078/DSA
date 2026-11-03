#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> previousGreatest(vector<int>v){
  int n = v.size();
  vector<int> result(n);
  stack<int> st;
  result[0] = -1;
  st.push(v[0]);
  for(int i = 1; i < n; i++){
    while(!st.empty() && v[i] > st.top()) st.pop();
    if(st.empty()) result[i] = -1;
    else result[i] = st.top();
    st.push(v[i]);
  }
  return result;
}
int main(){
  vector<int> v = {3,1,2,5,4,6,2,3};
  vector<int> result = previousGreatest(v);
  for(int ele : result){
    cout<<ele<<" ";
  }
}