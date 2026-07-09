#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s)
{
  if (s.length() % 2 != 0)
    return false;

  stack<char> st;
  for (int i = 0; i < s.length(); i++)
  {
    char c = s.at(i);
    if (c == '(' || c == '{' || c == '[')
    {
      st.push(c);
    }
    else
    {
      if (st.empty())
        return false;
      char top = st.top();
      if ((c == ')' && top != '(') ||
          (c == '}' && top != '{') ||
          (c == ']' && top != '['))
        return false;
      st.pop();
    }
  }
  return st.empty();
}

int main()
{
  string s = "{[()]}";

  if (isValid(s))
    cout << "Valid string..." << endl;
  else
    cout << "Not a valid string..." << endl;

  return 0;
}