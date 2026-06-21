#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  string name = "abcdefghi";
  // reverse(name.begin(),name.end());
  // cout<<name;
  // reverse(name.begin()+2,name.end());
  // cout<<name;
  // reverse(name.begin()+2,name.end()-1);
  // cout<<name;
  reverse(name.begin()+2,name.begin()+8);
  cout<<name;

  
}