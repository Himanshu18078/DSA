// Program to remove consecutive element
#include <iostream>
#include <stack>
#include <string>
#include<algorithm>
using namespace std;

string removeConsicutive(string s){
  stack<char> st;
  st.push( s.at(0));
  for(int i = 1; i < s.length() ; i++){
    if(s.at(i) == st.top()) continue;
    st.push(s.at(i));
  }
  string str = "";
  while(st.size() > 0){
    str+=st.top();
    st.pop();
  }
  reverse(str.begin(),str.end());
  return str;
}


int main()
{
  string s = "aaabbcddaabffg";
  string str = removeConsicutive(s);
  cout<<str<<endl; 
}