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
    TreeNode* build(vector<int>& pre, int preLow, int preHigh, vector<int>& in, int inLow, int inHigh){
        if(preLow > preHigh) return NULL;

        if(preLow == preHigh) return new TreeNode(pre[preLow]);

        TreeNode* node = new TreeNode(pre[preLow]);

        int i = inLow;

        while(i <= inHigh){
            if(in[i] == pre[preLow]) break;
            i++;
        }

        int leftCount = i - inLow;
        int rightCount = inHigh - i;

        node->left = build(
            pre,
            preLow + 1,
            preLow + leftCount,
            in,
            inLow,
            i - 1
        );

        node->right = build(
            pre,
            preLow + leftCount + 1,
            preHigh,
            in,
            i + 1,
            inHigh
        );

        return node;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder){
        return build(
            preorder,
            0,
            preorder.size() - 1,
            inorder,
            0,
            inorder.size() - 1
        );
    }
};

int main(){
    vector<int> preorder{3, 9, 20, 15, 7};
    vector<int> inorder{9, 3, 15, 20, 7};

    Solution solution;

    TreeNode* root = solution.buildTree(preorder, inorder);

    return 0;
}