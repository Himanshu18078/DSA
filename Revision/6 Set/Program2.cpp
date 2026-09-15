#include<iostream>
#include<set>
using namespace std;
int main(){
  set<int> s;
  s.insert(123);
  s.insert(142);
  s.insert(1252);
  s.insert(12352);
  for(auto ele : s){
    cout<<ele<<" ";
  }
  return 0;
}