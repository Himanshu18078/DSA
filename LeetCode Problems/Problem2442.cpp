#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
int reverse (int num){
    int r = 0;
    while(num > 0){
        r *= 10;
        r += num%10;
        num /= 10;
    }
    return r;
}
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s;
        for(int i = 0 ; i < nums.size(); i++){
            s.insert(nums[i]);
            s.insert(reverse(nums[i]));
        }
        return s.size();
    }
};

int main(){
    Solution obj;
    vector<int> nums = {1, 13, 10, 12, 31};
    cout << obj.countDistinctIntegers(nums) << endl;
    return 0;
}