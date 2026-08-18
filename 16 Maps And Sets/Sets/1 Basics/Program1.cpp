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
  s.insert(1);
  s.erase(1);
  for(int a : s){
    cout<<a<<" ";
  }
  cout<<endl;
  /*
  find() returns an iterator pointing to the element being searched for if it exists. If it doesn't exist, it returns end(), which is an iterator representing the position just after the last element. Since an iterator itself isn't a boolean, we compare the returned iterator with end() to get a true/false result.
  */
  if(s.find(20) != s.end()){
    cout<<"Exist"<<endl;
  }else{
    cout<<"Not Exist"<<endl;
  }
  cout<<s.size()<<endl;
  return 0;
}