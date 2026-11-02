// Program to remove consecutive Duplicates in a string
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
void removeConsicutiveDuplicate(string &str){
  stack<char> st;
  st.push(str[0]);
  for(int i = 1; i < str.length(); i++){
    if(str[i] == st.top()) continue;
    else(st.push(str[i]));
  }
  str = "";
  while(!st.empty()){
    str += st.top();
    st.pop();
  }
  reverse(str.begin() , str.end());
}
int main(){
  string s = "aaabbcddbffg";
  cout<<s<<endl;
  removeConsicutiveDuplicate(s);
  cout<<s<<endl;
}