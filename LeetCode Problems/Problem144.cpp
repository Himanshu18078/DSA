// PREORDER TRAVERSAL
#include<iostream>
#include<vector>
using namespace std;

struct TreeNode{
  int val;
  TreeNode* left;
  TreeNode* right;

  TreeNode(int val){
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

void helper(TreeNode* root , vector<int> &result){
  if(root == NULL) return;

  result.push_back(root->val);
  helper(root->left , result);
  helper(root->right , result);
}

vector<int> preorderTraversal(TreeNode* root){
  vector<int> result;
  helper(root , result);
  return result;
}

int main(){
  TreeNode* root = new TreeNode(1);
  root->right = new TreeNode(2);
  root->right->left = new TreeNode(3);

  vector<int> result = preorderTraversal(root);

  for(int i = 0 ; i < result.size() ; i++){
    cout << result[i] << " ";
  }

  return 0;
}