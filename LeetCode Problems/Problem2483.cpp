#include<iostream>
#include<vector>
using namespace std;
int bestClosingTime(string customers)
{
  int n = customers.length();
  vector<int> leftN(n + 1, 0);  // leftN[i]  = 'N' count from 0 to i-1
  vector<int> rightY(n + 1, 0); // rightY[i] = 'Y' count from i to n-1

  // Left se N count karo
  for (int i = 0; i < n; i++)
    leftN[i + 1] = leftN[i] + (customers[i] == 'N' ? 1 : 0);

  // Right se Y count karo
  for (int i = n - 1; i >= 0; i--)
    rightY[i] = rightY[i + 1] + (customers[i] == 'Y' ? 1 : 0);

  // Minimum penalty wala index dhundo
  int minIndex = 0;
  int minValue = leftN[0] + rightY[0];
  for (int i = 1; i <= n; i++)
  {
    int cost = leftN[i] + rightY[i];
    minIndex = (cost < minValue) ? i : minIndex;
    minValue = (cost < minValue) ? cost : minValue;
  }

  return minIndex;
}