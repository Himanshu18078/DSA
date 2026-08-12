// Program to validate the binary tree
#include<iostream>
#include<vector>
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

class Solution{
  public:
  void inOrderTraversal(TreeNode* root , vector<int> &v){
    if(root == NULL) return;
    inOrderTraversal(root->left , v);
    v.push_back(root->val);
    inOrderTraversal(root->right , v);
  }

  bool isValidBST(TreeNode* root){
    vector<int> v;
    inOrderTraversal(root , v);

    for(int i = 1; i < v.size(); i++){
      if(v[i-1] >= v[i]) return false;
    }

    return true;
  }
};

int main(){
  TreeNode* a = new TreeNode(1);
  TreeNode* b = new TreeNode(2);
  TreeNode* c = new TreeNode(3);
  TreeNode* d = new TreeNode(4);
  TreeNode* e = new TreeNode(5);
  TreeNode* f = new TreeNode(6);
  TreeNode* g = new TreeNode(7);

  d->left = b;
  d->right = f;
  b->left = a;
  b->right = c;
  f->left = e;
  f->right = g;

  Solution s;

  if(s.isValidBST(d))
    cout<<"Valid BST";
  else
    cout<<"Not a valid BST";

  return 0;
}