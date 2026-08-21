// GOAT QUESTION 
#include <iostream> 
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int reverseNum(int num){
        int rev = 0;

        while(num > 0){
            rev = rev * 10 + num % 10;
            num /= 10;
        }

        return rev;
    }

    int countNicePairs(vector<int>& nums) {
        long long count = 0;
        unordered_map<int, int> m;

        for(int i = 0; i < nums.size(); i++){
            int key = nums[i] - reverseNum(nums[i]);

            count += m[key];

            m[key]++;
        }

        return count % 1000000007;
    }
};

int main(){
    Solution obj;

    vector<int> nums = {42, 11, 1, 97};

    cout << obj.countNicePairs(nums) << endl;

    return 0;
}