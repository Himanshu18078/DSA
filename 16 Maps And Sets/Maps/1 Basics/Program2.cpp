#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
  unordered_map<string , int> m;
  m["Himanshu"] = 1;
  m["Mohit"] = 2;
  m["Gautam"] = 3;

  for(auto p : m){
    cout<<p.first<<" "<<p.second<<endl;
  }

  m.erase("Gautam");

  for(auto p : m){
    cout<<p.first<<" "<<p.second<<endl;
  }

  cout<<m["Himanshu"]<<endl;
}