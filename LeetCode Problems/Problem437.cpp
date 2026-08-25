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
    void helper(TreeNode* root, long long targetSum, int &count){
        if(root == NULL) return;

        if(root->val == targetSum){
            count++;
        }

        // We use long long because after subtracting node values
        // from targetSum, the value can go outside the int range.
        helper(root->left, targetSum - (long long)(root->val), count);
        helper(root->right, targetSum - (long long)(root->val), count);
    }

    int pathSum(TreeNode* root, int targetSum){
        if(root == NULL) return 0;

        int count = 0;

        // targetSum is int in the original problem,
        // so we convert it to long long before recursion.
        helper(root, (long long)targetSum, count);

        // Check paths starting from every node in the left subtree.
        count += pathSum(root->left, targetSum);

        // Check paths starting from every node in the right subtree.
        count += pathSum(root->right, targetSum);

        return count;
    }
};

int main(){
    return 0;
}