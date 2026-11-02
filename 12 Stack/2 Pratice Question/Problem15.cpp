// Previous greatest element
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> previousGreatestElement(vector<int> v){
  int n = v.size() -1;
  vector<int> result(v.size());
  stack<int> s;
  s.push(v[0]);
  result[0] = -1;

  for(int i = 1; i <= n ;i++){
    while(!s.empty() && s.top() < v[i]) s.pop();
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
  vector<int> nextGre = previousGreatestElement(arr);
  printVector(nextGre);
}
