#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
  sort(strs.begin(), strs.end());
  int lastElement = strs.size() - 1;
  int len = strs[0].size();
  string newStr = "";
  for (int i = 0; i < len; i++)
  {
    if (strs.at(0).at(i) == strs.at(lastElement).at(i))
    {
      newStr += strs.at(0).at(i);
    }else{
      break;
    }
  }
  return newStr;
}
int main()
{
}