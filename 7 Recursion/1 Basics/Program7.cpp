// Prorgam to calculate sum with return type
#include <iostream>
using namespace std;

int printSum(int num)
{
  if (num == 0)
    return 0;
  return num + printSum(num - 1); // move toward base case, and return the result
}

int main()
{
  cout << "Sum is : " << printSum(10) << endl;
}