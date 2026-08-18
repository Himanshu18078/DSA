#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count = 0;
        unordered_set<string> s;
        for(int i = 0; i < words.size() ; i++){
            s.insert(words[i]);
        }
        for(int i = 0; i < words.size() ; i++){
            string str = words[i];
            reverse(str.begin() , str.end());
            if(str == words[i]) continue;
            if(s.find(str) != s.end()){
                count++;
                s.erase(words[i]);
                s.erase(str);
            }
        }
        return count;
    }
};

int main() {
    Solution obj;

    vector<string> words = {"cd", "ac", "dc", "ca", "zz"};

    cout << obj.maximumNumberOfStringPairs(words);

    return 0;
}