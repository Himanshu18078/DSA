#include<iostream>
#include<map>
using namespace std;
int main(){
  map<int,int> m;
  m[1] = 242;
  m[4] = 2142;
  m[2] = 2322;
  m[5] = 2425535;
  m[3] = 2424322;
  for(auto ele : m){
    cout<<ele.first<<" "<<ele.second<<endl;
    
  }
  string s = to_string(242);
  
}