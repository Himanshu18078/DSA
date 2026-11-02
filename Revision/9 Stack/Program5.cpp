// Porgram for balance bracket
#include<iostream>
#include<stack>
using namespace std;
bool balanceBracket(string s){
  stack<char> st;
  for(int i = 0; i < s.length() ; i++){
    if(s[i] == ')' && st.empty()) return false;
    else if(s[i] == '(') st.push('(');
    else if(st.top() == '(' && s[i] == ')') st.pop();
  }
  return st.empty();
}
int main(){
  string s = ")()(";
  if(balanceBracket(s)) cout<<"Balanced..."<<endl;
  else cout<<"Not balanced..."<<endl;
}