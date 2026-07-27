#include<iostream>
#include<stack>
#include<vector>
using namespace std;
/*
vector<int> nextGreatestElement(vector<int> arr){
  stack<int> st;
  vector<int> result(arr.size());
  result[arr.size() - 1] = -1;
  st.push(arr[arr.size() -1]);
  for(int i = arr.size() - 2; i >= 0; i--){
    //pop all the element smaller than arr[i]
    while (st.size() > 0 && st.top() <= arr[i])
    {
      st.pop();
    }
    
  }
}
  */