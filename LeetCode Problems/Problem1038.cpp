#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

class Solution {
public:
    int sum = 0;

    TreeNode* bstToGst(TreeNode* root) {
        if(root == NULL) return NULL;

        bstToGst(root->right);

        sum = root->val + sum;
        root->val = sum;

        bstToGst(root->left);

        return root;
    }
};

void inorder(TreeNode* root) {
    if(root == NULL) return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {

    // Creating BST
    TreeNode* root = new TreeNode(4);

    root->left = new TreeNode(1);
    root->right = new TreeNode(6);

    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(2);

    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);

    root->left->right->right = new TreeNode(3);
    root->right->right->right = new TreeNode(8);

    Solution obj;

    cout << "Before conversion: ";
    inorder(root);

    obj.bstToGst(root);

    cout << "\nAfter conversion: ";
    inorder(root);

    return 0;
}