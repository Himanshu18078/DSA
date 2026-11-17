#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
/*
void maxElement(vector<int> v , int currIndex , int maxEle){
  if(v.size() == currIndex){
    cout<<maxEle<<endl;
    return;
  }
  if(v[currIndex] > maxEle) maxEle = v[currIndex];
  maxElement(v , currIndex+1 , maxEle);
}
*/

int maxElement(vector<int> v , int currIndex){
  if(v.size() == currIndex) return INT_MIN;
  return max(v[currIndex] , maxElement(v , currIndex+1));
}
int main(){
  vector<int> v = {10,20,240,52,52,62,6,26};
  cout<<maxElement(v , 0);
}