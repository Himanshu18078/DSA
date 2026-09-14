#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
  unordered_set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(4);
  s.insert(5);
  for(auto ele : s){
    cout<<ele<<" ";
  }
  int target  = 2;
  if(s.find(target) != s.end()){
    cout<<"present"<<endl;
  }else{
    cout<<"Not in a list"<<endl;
  }
}