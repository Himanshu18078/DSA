// Grumpy Bookstore owner
#include <bits/stdc++.h>
using namespace std;

int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes)
{
  int n = customers.size();

  /*
   Pehle hum initial window ka loss calculate karte hain
   Loss matlab — jin customers ko satisfy kar sakte the
   lekin owner grumpy tha isliye nahi kar paaye
   Sirf grumpy == 1 wale count honge kyunki unhe hi technique se convert karna hai
  */
  int currentLoss = 0;
  for (int i = 0; i < minutes; i++)
  {
    if (grumpy[i] == 1)
    {
      currentLoss += customers[i];
    }
  }

  /*
   Pehli window ka loss hi abhi tak ka maximum loss hai
   maxIndex — woh starting index jahan se technique lagani hai
  */
  int maxLoss = currentLoss;
  int maxIndex = 0;

  int i = 1;
  int j = minutes;

  /*
   Ab window slide karenge ek ek step aage
   i — window ka left pointer (naya start)
   j — window ka right pointer (naya end)
  */
  while (j < n)
  {
    /*
     Window se jo element nikla (i-1), agar woh grumpy tha
     toh uska loss ab nahi rahega isliye subtract karo
    */
    if (grumpy[i - 1] == 1)
      currentLoss -= customers[i - 1];

    /*
     Window mein jo naya element aaya (j), agar woh grumpy hai
     toh uska loss add karo kyunki ab technique usse cover karegi
    */
    if (grumpy[j] == 1)
      currentLoss += customers[j];

    /*
     Agar current window ka loss zyada hai toh update karo
     matlab is window mein zyada grumpy customers hain
     jinhe technique se satisfy kar sakte hain
    */
    if (maxLoss < currentLoss)
    {
      maxLoss = currentLoss;
      maxIndex = i;
    }

    i++;
    j++;
  }

  /*
   Best window mil gayi — ab us range mein grumpy ko 0 kar do
   matlab owner us time grumpy nahi rahega (technique laga di)
  */
  int count = minutes;
  while (count > 0)
  {
    grumpy[maxIndex] = 0;
    count--;
    maxIndex++;
  }

  /*
   Ab saare grumpy == 0 wale customers ko sum karo
   grumpy == 0 matlab — already satisfied the, ya technique ne satisfy kiya
  */
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    if (grumpy[i] == 0)
    {
      sum += customers[i];
    }
  }

  return sum;
}