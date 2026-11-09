// Maze Path
#include<iostream>
#include<vector>
using namespace std;
int mazePath(int sr,int sc , int er, int ec , string way , vector<string> &v){
  if(sr > er || sc > ec) return 0;
  if(sr == er && sc == ec) {
    v.push_back(way);
    return 1;
  }
  int downWays = mazePath(sr+1 , sc , er , ec , way+"d",v);
  int rightWays = mazePath(sr , sc+1 , er , ec, way+"r",v);
  return downWays + rightWays;
}
int main(){
  vector<string> v;
  cout<<"Total paths are : ";
  cout<<mazePath(0,0,1,2,"",v);
  cout<<endl;
  cout<<"Total ways : "<<endl;
  for(string way : v){
    cout<<way<<endl;
  }
}