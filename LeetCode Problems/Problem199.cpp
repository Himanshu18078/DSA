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
    // function to get the total level of the tree
    int levelOfTree(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(levelOfTree(root->left), levelOfTree(root->right));
    }

    void helper(TreeNode* root, vector<int> &v, int level){
        if(root == NULL) return;

        v[level] = root->val;

        helper(root->left, v, level + 1);
        helper(root->right, v, level + 1);
    }

    vector<int> rightSideView(TreeNode* root) {
        int level = levelOfTree(root);

        vector<int> v(level);

        helper(root, v, 0);

        return v;
    }
};

int main(){
    return 0;
}