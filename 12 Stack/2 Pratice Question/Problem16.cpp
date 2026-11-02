#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> stockSpan(vector<int> v){
  int n = v.size()-1;
  vector<int> result(v.size());
  stack<int> temp1;
  stack<int> temp2;
  result[0] = 1;
  temp1.push(v[0]);

  for(int i = 1; i <= n; i++){
    int count = 1;
    while(!temp1.empty() && v[i] >= temp1.top()){
      count++;
      temp2.push(temp1.top());
      temp1.pop();
    }
    result[i] = count;
    while(!temp2.empty()){
      temp1.push(temp2.top());
      temp2.pop();
    }
    temp1.push(v[i]);
  }
  return result;
}

void printVector(vector<int> arr){
  for(int ele :  arr){
    cout<<ele<<" ";
  }
  cout<<endl;
}
int main() {
  vector<int> v = {100, 80,60,70,60,75,85};
  printVector(v);
  vector<int> result = stockSpan(v);
  printVector(result);
  return 0;
}