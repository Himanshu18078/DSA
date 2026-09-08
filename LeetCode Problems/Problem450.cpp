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

    TreeNode* inorderPredecessor(TreeNode* root) {
        TreeNode* pred = root->left;

        while(pred->right != NULL) {
            pred = pred->right;
        }

        return pred;
    }

    TreeNode* inorderSuccessor(TreeNode* root) {
        TreeNode* suc = root->right;

        while(suc->left != NULL) {
            suc = suc->left;
        }

        return suc;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {

        if(root == NULL)
            return NULL;

        if(root->val == key) {

            // Case No 1: Leaf Node
            if(root->left == NULL && root->right == NULL) {
                return NULL;
            }

            // Case No 2: One Child Node
            if(root->left == NULL || root->right == NULL) {
                if(root->left != NULL)
                    return root->left;
                else
                    return root->right;
            }

            // Case No 3: Two Child Nodes
            if(root->left != NULL && root->right != NULL) {

                TreeNode* pred = inorderPredecessor(root);

                root->val = pred->val;

                root->left = deleteNode(root->left, pred->val);

                return root;
            }
        }

        if(root->val > key) {
            root->left = deleteNode(root->left, key);
        }
        else {
            root->right = deleteNode(root->right, key);
        }

        return root;
    }
};

int main() {
    return 0;
}