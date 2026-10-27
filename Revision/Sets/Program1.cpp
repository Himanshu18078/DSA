#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
  unordered_set<int>s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(3);

  for(int n : s){
    cout<<n<<" ";
  }

  if(s.find(5) != s.end()){
    cout<<"Exists"<<endl;
  }else cout<<"No"<<endl;
}