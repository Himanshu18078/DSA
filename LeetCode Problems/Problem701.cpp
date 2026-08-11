#include<iostream>
using namespace std;

class TreeNode{
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

TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL) return new TreeNode(val);

        if(root -> val > val){
            if(root->left == NULL){
                root->left = new TreeNode(val);
            }
            else{
                insertIntoBST(root->left,val);
            }
        }
        else{
            if(root->right == NULL){
                root->right = new TreeNode(val);
            }
            else{
                insertIntoBST(root->right,val);
            }
        }

        return root;
}

int main(){
  return 0;
}