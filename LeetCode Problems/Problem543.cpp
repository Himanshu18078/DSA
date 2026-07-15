// Diameter of the binary tree
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
class TreeNode{
  public :
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int val){
    this->val = val;
    this->left = NULL;
    this->right =NULL;
  }
};
int MaxDia = 0;
int height(TreeNode* root){
  if(root== NULL) return 0;
  return 1 + max(height(root->left) ,height(root->right));
}
int diameterOfBinaryTree(TreeNode* root){
  if(root == NULL) return 0;
  int dia =  height(root->left) + height(root->right);
  MaxDia = max(MaxDia , dia);
  diameterOfBinaryTree(root->left);
  diameterOfBinaryTree(root->right);
  return MaxDia;
}
int main(){
  TreeNode* a = new TreeNode(10);
  TreeNode* b = new TreeNode(20);
  TreeNode* c = new TreeNode(30);
  TreeNode* d = new TreeNode(40);
  TreeNode* e = new TreeNode(50);
  TreeNode* f = new TreeNode(60);
  TreeNode* g = new TreeNode(70);
  a->left = b;
  a->right = c;
  b->left = d;
  b->right = e;
  c->left =f;
  c->right=g;
  cout<<diameterOfBinaryTree(a);
}