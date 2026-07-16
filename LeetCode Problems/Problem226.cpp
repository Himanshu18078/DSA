#include <iostream>
using namespace std;

// Definition for a binary tree node.
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to invert the binary tree
void helper(TreeNode* root) {
    if (root == NULL)
        return;

    // Swap left and right child
    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;

    // Recursively invert left and right subtrees
    helper(root->left);
    helper(root->right);
}

TreeNode* invertTree(TreeNode* root) {
    helper(root);
    return root;
}

// Function to print tree in Preorder
void preorder(TreeNode* root) {
    if (root == NULL)
        return;

    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    // Create Binary Tree
    //         4
    //       /   \
    //      2     7
    //     / \   / \
    //    1   3 6   9

    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);

    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    cout << "Preorder before inversion: ";
    preorder(root);
    cout << endl;

    invertTree(root);

    cout << "Preorder after inversion: ";
    preorder(root);
    cout << endl;

    return 0;
}