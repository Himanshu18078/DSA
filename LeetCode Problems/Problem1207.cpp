#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int , int>m;
        unordered_set<int>f;

        for(int i = 0; i < arr.size(); i++){
            m[arr[i]]++;
        }

        for(auto ele : m){
            if(f.find(ele.second) != f.end()){
                return false;
            }
            else{
                f.insert(ele.second);
            }
        }

        return true;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {1, 2, 2, 1, 1, 3};

    cout << obj.uniqueOccurrences(arr);

    return 0;
}