#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
  string str = "Hi my name is himanshu bisht and my degree is B.tech";
  stringstream ss(str);
  string temp;
  vector<string> v;
  while(ss>>temp){
    v.push_back(temp);
  }
  sort(v.begin() ,v.end());
  for(auto ele : v){
    cout<<ele<<" ";
  }
  cout<<endl;
  int maxCount = 1;
  int count = 1;

  for(int i = 1; i < v.size() ; i++){
    if(v.at(i) == v.at(i-1)) count++;
    else count = 1;
    if(maxCount < count) maxCount = count;
  }
  count = 1;
  for(int i = 1 ; i < v.size() ; i++){
    if(v.at(i) == v.at(i-1)) count++;
    if(count == maxCount) cout<<"Character : "<<v.at(i)<<" Frequency : "<<count<<endl;
  }
  cout<<"Max count is : "<<maxCount<<endl;
}