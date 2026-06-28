#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem 1402: Reducing Dishes
int maxSatisfaction(vector<int> &satisfaction)
{
    int n = satisfaction.size();
    sort(satisfaction.begin(), satisfaction.end());

    // suffixSum[i] = sum of satisfaction from i to n-1
    vector<int> suffixSum(n);
    suffixSum[n - 1] = satisfaction[n - 1];
    int index = n - 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffixSum[i] = suffixSum[i + 1] + satisfaction[i];
        if (suffixSum[i] > 0)
            index = i;
    }

    // ❌ Mistake 1: i <= n tha → out of bounds, hona chahiye i < n
    // ❌ Mistake 2: index++ tha → infinite loop kyunki i aur index dono badh rahe the
    // ❌ Mistake 3: suffixSum[i] * (n-1-i-1) tha → galat formula, satisfaction[i] use karo
    // ❌ Mistake 4: sab satisfaction negative ho toh suffixSum kabhi positive nahi hoga
    //               index update nahi hoga, loop phir bhi chalta aur galat answer aata
    //               Fix: suffixSum[index] <= 0 check karo aur 0 return karo
    if (suffixSum[index] <= 0)
        return 0;

    int sum = 0;
    for (int i = index; i < n; i++)
    {
        sum += satisfaction[i] * (i - index + 1);
    }
    return sum;
}

int main()
{
    vector<int> satisfaction = {-1, -8, 0, 5, -9};
    cout << maxSatisfaction(satisfaction) << endl;  // Output: 14
    return 0;
}