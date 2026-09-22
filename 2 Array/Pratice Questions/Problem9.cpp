// Program to merge two sorted array
#include <iostream>
#include <vector>
using namespace std;
vector<int> mergeArray(vector<int> a, vector<int> b)
{
  int i = 0;
  int j = 0;
  int k = 0;
  vector<int> result(a.size() + b.size());

  while (i < a.size() && j < b.size())
  {
    if (a[i] < b[j])
    {
      result[k] = a[i];
      i++;
      k++;
    }
    else
    {
      result[k] = b[j];
      j++;
      k++;
    }
  }
  if (i == a.size())
  {
    while (j < b.size())
      result[k++] = b[j++];
  }
  else
  {
    while (i < a.size())
      result[k++] = a[i++];
  }
  return result;
}
int main()
{
  return 0;
}