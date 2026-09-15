#include<iostream>
#include<map>
using namespace std;
int main(){
  map<string , int> m;
  m["Himanshu"] = 1;
  m["Mohit"] = 2;
  m["Gautam"] = 3;

  for(auto p : m){
    cout<< p.first<<" "<<p.second<<endl;
  }
  return 0;
}