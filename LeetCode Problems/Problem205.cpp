// ISOMORPHIC
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isIsomorphic(string s, string t)
{

  // If lengths are different, strings cannot be isomorphic
  if (s.length() != t.length())
    return false;

  // Create a frequency/mapping array.
  // 1000 is used as a sentinel value meaning "not assigned yet".
  vector<int> v(150, 1000);

  // First pass: check mapping from s -> t
  for (int i = 0; i < s.length(); i++)
  {

    // Get ASCII value of current character in s
    int index = int(s[i]);

    // If this character has not been seen before,
    // store the difference between s[i] and t[i]
    if (v[index] == 1000)
      v[index] = s[i] - t[i];

    // If already seen, the difference must remain the same
    else if (v[index] != s[i] - t[i])
      return false;
  }

  // Reset the array for checking reverse mapping
  for (int i = 0; i < 150; i++)
  {
    v[i] = 1000;
  }

  // Second pass: check mapping from t -> s
  for (int i = 0; i < t.length(); i++)
  {

    // Get ASCII value of current character in t
    int index = int(t[i]);

    // If this character has not been seen before,
    // store the reverse difference
    if (v[index] == 1000)
      v[index] = t[i] - s[i];

    // If already seen, the difference must remain the same
    else if (v[index] != t[i] - s[i])
      return false;
  }

  // Both forward and reverse checks passed
  return true;
}

int main()
{

  string s = "egg";
  string t = "add";

  if (isIsomorphic(s, t))
    cout << "Strings are Isomorphic" << endl;
  else
    cout << "Strings are Not Isomorphic" << endl;

  return 0;
}