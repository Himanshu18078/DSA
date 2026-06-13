#include<iostream>
#include<vector>
using namespace std;
// vector is pass by value not pass by reference
// each time when you pass a new vector with same size is created
void change(vector<int> &a){
  a.at(0) = 100;
}
int main(){
  vector <int> v;
  v.push_back(66);
  v.push_back(45);
  v.push_back(55);
  v.push_back(75);
  for(int i = 0; i < v.size();i++){
    cout<<v.at(i)<<" ";
  }
  cout<<endl;
  change(v);
  for(int i = 0; i < v.size();i++){
    cout<<v.at(i)<<" ";
  }
}