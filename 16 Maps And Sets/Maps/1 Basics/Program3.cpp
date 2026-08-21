#include <iostream>
using namespace std;
int main()
{
  int num = 432;
  int rev = 0;
  while (num > 0)
  {
    int lastDigit = num % 10;
    rev = (rev * 10) + lastDigit;
    num /= 10;
  }
  cout<<rev;
}