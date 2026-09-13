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
    vector<int> morrisInorder(TreeNode* root) {

        vector<int> result;
        TreeNode* curr = root;

        while(curr != NULL) {

            // Case 1: No left child
            if(curr->left == NULL) {
                result.push_back(curr->val);
                curr = curr->right;
            }

            // Case 2: Left child exists
            else {

                // Find inorder predecessor
                TreeNode* pred = curr->left;

                while(pred->right != NULL && pred->right != curr) {
                    pred = pred->right;
                }

                // Create temporary link
                if(pred->right == NULL) {
                    pred->right = curr;
                    curr = curr->left;
                }

                // Remove temporary link
                else {
                    pred->right = NULL;
                    result.push_back(curr->val);
                    curr = curr->right;
                }
            }
        }

        return result;
    }
};

int main() {
    return 0;
}