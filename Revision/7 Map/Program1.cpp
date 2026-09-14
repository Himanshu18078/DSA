#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
  unordered_map<string,int> m;
  // pair<string , int> p1;
  // p1.first = "Himanshu";
  // p1.second = 1;
  // pair<string , int> p2;
  // p2.first = "Mohit";
  // p2.second = 2;
  // pair<string , int> p3;
  // p3.first = "Gautam";
  // p3.second = 3;
  // m.insert(p1);
  // m.insert(p2);
  // m.insert(p3);
  m["Himanshu"] = 1; 
  m["Mohit"] = 2; 
  m["Gautam"] = 3; 

  for(auto p : m){
    cout<<p.first<<" "<<p.second<<endl;
  }
  return 0;
}