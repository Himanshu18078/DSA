#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> nextGreatest(vector<int> vec){
  int n = vec.size();
  vector<int> result(n);
  stack<int>st;
  result[n-1] = -1;
  st.push(vec[n-1]);

  for(int i = n-2 ; i >= 0 ; i--){
    while(!st.empty() && vec[i] > st.top()) st.pop();
    if(st.empty()) result[i] = -1;
    else result[i] = st.top();
    st.push(vec[i]);
  }
  return result;
}
int main(){
  vector<int> v = {3,1,2,5,4,6,2,3};
  vector<int> result = nextGreatest(v);
  for(int ele : result){
    cout<<ele<<" ";
  }
}