#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
  unordered_map<string,int> m;
  m["himanshu"] = 1;
  m["mohit"] = 2;
  m["gautam"] = 3;

  for(auto p : m){
    cout<<p.first<<" "<<p.second<<endl;
  }
}