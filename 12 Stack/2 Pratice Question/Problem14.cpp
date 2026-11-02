#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nextGreatest(vector<int> v){
  int n = v.size() -1;
  vector<int> result(v.size());
  stack<int> s;
  result[n] = -1;
  s.push(v[n]);
  
  for(int i = n-1 ; i>= 0; i--){
    while(!s.empty() && v[i] > s.top() ){
      s.pop(); 
    }
    if(s.empty()) result[i] = -1;
    else result[i] = s.top();
    s.push(v[i]);
  }
  return result;
}
void printVector(vector<int> arr){
  for(int ele :  arr){
    cout<<ele<<" ";
  }
  cout<<endl;
}
int main(){
  vector<int> arr = {3,1,2,5,4,6,2,3};
  printVector(arr);
  vector<int> nextGre = nextGreatest(arr);
  printVector(nextGre);
}