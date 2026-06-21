// Input a string and return the number of times the neighbouring character are different form each other
#include <iostream>
using namespace std;
int main()
{
  string str;
  cout << "Please enter a string : ";
  cin >> str;
  int count = 0;
  for (int i = 0; i < str.length() - 1; i++)
  {
    if (str.length() == 1)
    {
      cout << "Result is : " << count << endl;
      break;
    }
    if(str.length() == 2 && str[0] != str[1]){
      count = 1;
      break;
    }
    if (i == 0)
    {
      if (str[i] != str[i + 1])
      {
        count++;
      }
    }
    else if (i == str.length() - 1)
    {
      if (str[i] != str[i - 1])
      {
        count++;
      }
    }
    else if (str[i] != str[i + 1] && str[i] != str[i - 1])
    {
      count++;
    }
  }
  cout << "Result is : " << count << endl;
}