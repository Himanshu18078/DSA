// Program for factorail using recursion
#include <iostream>
using namespace std;
int factorial(int n)
{
  
  if (n == 1 || n==0) return 1;
  return n * factorial(n - 1);
}
int main()
{
  int num;
  cout << "Enter the number of which you want to calculate factorial of : ";
  cin >> num;
  cout << "Factorial of " << num << " is : " << factorial(num);
}