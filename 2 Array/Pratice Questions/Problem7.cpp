// Sort vector of 0's and 1's
#include <iostream>
#include <vector>
using namespace std;
void sortVector(vector<int> &v)
{
  int ones = 0;
  int zeros = 0;
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] == 1)
      ones++;
    else
      zeros++;
  }
  int i = 0;
  for (int k = 0; k < zeros; k++) v[i++] = 0;
  for (int k = 0; k < ones; k++) v[i++] = 1;
}
void sortVector2(vector<int> &v){
  int i = 0;
  int j = v.size() -1;
  while( i <= j){
    if(v[i] == 0) i++;
    if(v[j] == 1) j--;
    else{
      swap(v[i] , v[j]);
      i++;
      j--;
    }
  }
}
int main()
{
  vector<int> v = {1, 0, 0, 1, 1, 0, 1, 0};
  sortVector2(v);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  return 0;
}