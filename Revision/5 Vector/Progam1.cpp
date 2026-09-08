#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v(5);
  for(auto ele : v){
    cout<<ele<<" ";
  }
  return 0;
}