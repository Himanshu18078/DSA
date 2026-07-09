// Balance Bracket
#include<iostream>
#include<stack>
#include<string>
using namespace std;
//fucntion to check weather the string is balance or not
bool isBalance(string s){
  if(s.length() % 2 != 0)return false;
  stack<char> st;
  for(int i = 0; i < s.length();i++){
    if(s.size() == 0 && s.at(i) == ')') return false;
    else if(s.at(i) == '(') st.push(s.at(i));
    else{
      if(st.empty()) return false;
      st.pop();
    }
  }
  if(st.size() != 0) return false;
  return true;
}
int main(){
string st = "())()(";
if(isBalance(st))cout<<"Balance String..."<<endl;
else cout<<"Not a balance string..."<<endl;
}