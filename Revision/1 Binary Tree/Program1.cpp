// Program to create a tree and dispaly it
#include <iostream>
#include<climits>
using namespace std;
class TreeNode
{
public:
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};
// Function to print the tree
void printTree(TreeNode * root){
  if(root == NULL) return;
  cout<<root->val<< " ";
  printTree(root->left);
  printTree(root->right);
}
// Function to print the sum of the tree
int printSumOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return root->val + printSumOfTree(root->left) + printSumOfTree(root->right);
}
// Function to print the size of the tree
int printSizeOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return 1 + printSizeOfTree(root->left) + printSizeOfTree(root->right);
}
// Function to print the maximum node of the binary tree
int maxInBinaryTree(TreeNode* root){
  if(root == 0) return INT_MIN;
  return max(root->val , max(maxInBinaryTree(root->left) , maxInBinaryTree(root->right)));
}
// Function to find level of a binary tree
int levelOfBinaryTree(TreeNode* root){
  if(root == NULL) return 0;
  return 1 + max(levelOfBinaryTree(root->left) , levelOfBinaryTree(root->right));
}
int main()
{
  TreeNode *a = new TreeNode(1);
  TreeNode *b = new TreeNode(2);
  TreeNode *c = new TreeNode(3);
  TreeNode *d = new TreeNode(4);
  TreeNode *e = new TreeNode(5);
  TreeNode *f = new TreeNode(6);
  TreeNode *g = new TreeNode(7);
  a->left = b;
  a->right = c;
  b->left = d;
  b->right = e;
  c->left = f;
  c->right = g;
  printTree(a);
  cout<<endl;
  cout<<"Sum of the tree is : "<<printSumOfTree(a)<<endl;
  cout<<"Size of the tree is : "<<printSizeOfTree(a)<<endl;
  cout<<"Maximum value in the binary tree is : "<< maxInBinaryTree(a)<<endl;
  cout<<"Level Of the binary tree is : " <<levelOfBinaryTree(a)<<endl;
  cout<<"Height of the binary tree is : "<<levelOfBinaryTree(a)-1<<endl;
  return 0;
}