#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:

    void insertIntoBinaryTree(TreeNode* root, int val) {
        if(root == NULL) {
            root = new TreeNode(val);
        }
        else if(root->val > val) {
            if(root->left == NULL)
                root->left = new TreeNode(val);
            else
                insertIntoBinaryTree(root->left, val);
        }
        else {
            if(root->right == NULL)
                root->right = new TreeNode(val);
            else
                insertIntoBinaryTree(root->right, val);
        }
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.empty())
            return NULL;

        TreeNode* root = new TreeNode(preorder[0]);

        for(int i = 1; i < preorder.size(); i++) {
            insertIntoBinaryTree(root, preorder[i]);
        }

        return root;
    }
};

int main() {
    Solution solution;

    vector<int> preorder = {8, 5, 1, 7, 10, 12};

    TreeNode* root = solution.bstFromPreorder(preorder);

    return 0;
}