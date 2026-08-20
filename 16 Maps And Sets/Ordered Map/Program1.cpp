#include<iostream>
#include<set>
using namespace std;
int main(){
  // here everything will happen in O(logn) complexity
  set<int> s;
  s.insert(3424);
  s.insert(342424);
  s.insert(25325424);
  s.insert(34245355);
  s.insert(34);
  for(auto ele : s){
    cout<<ele<<" ";
  }
}