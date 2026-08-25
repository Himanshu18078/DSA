#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

class Solution {
public:
    void helper(TreeNode* root, int targetSum, vector<vector<int>> &result, vector<int> &pathVector){
        if(root == NULL) return;

        pathVector.push_back(root->val);

        if(root->left == NULL && root->right == NULL && root->val == targetSum){
            result.push_back(pathVector);
            pathVector.pop_back();
            return;
        }

        helper(root->left, targetSum - root->val, result, pathVector);
        helper(root->right, targetSum - root->val, result, pathVector);

        pathVector.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum){
        vector<vector<int>> ans;
        vector<int> pathVector;

        helper(root, targetSum, ans, pathVector);

        return ans;
    }
};

int main(){
    return 0;
}