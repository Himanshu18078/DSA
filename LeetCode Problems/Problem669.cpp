#include <iostream>
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
    TreeNode* trimBST(TreeNode* root, int low, int high) {

        // Empty tree
        if(root == NULL) {
            return NULL;
        }

        // Current node is smaller than low
        if(root->val < low) {
            return trimBST(root->right, low, high);
        }

        // Current node is greater than high
        if(root->val > high) {
            return trimBST(root->left, low, high);
        }

        // Current node is within the range
        root->left = trimBST(root->left, low, high);
        root->right = trimBST(root->right, low, high);

        return root;
    }
};

int main() {
    return 0;
}