// Basic tree
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
//Function to print the tree
void printTree(TreeNode* root){
  if(root == NULL) return;
  cout<<root->val<<" ";
  printTree(root->left);
  printTree(root->right);
}
//function to get the size of the tree
int sizeOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}
//function to get sum of all node
int sumOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return root->val + sumOfTree(root->left) + sumOfTree(root->right);
}
//function to get the maximum element of the tree
int maxElementOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return max(root->val, max(maxElementOfTree(root->left) , maxElementOfTree(root->right)));
}
//function to get the level of the tree
int levelOfTree(TreeNode* root){
  if(root == NULL) return 0;
  int leftLevel = levelOfTree(root->left);
  int rightLevel = levelOfTree(root->right);
  return 1 + max(leftLevel , rightLevel);
}
int main(){
  //Different Tree Node
  TreeNode* a = new TreeNode(1);
  TreeNode* b = new TreeNode(2);
  TreeNode* c = new TreeNode(3);
  TreeNode* d = new TreeNode(4);
  TreeNode* e = new TreeNode(5);
  TreeNode* f = new TreeNode(6);
  TreeNode* g = new TreeNode(7);
  a->left = b;
  a->right = c;
  b->left = d;
  b->right = e;
  c->left = f;
  c->right = g;
  printTree(a);
  cout<<endl;
  cout<<"Size of the tree is : "<<sizeOfTree(a)<<endl;
  cout<<"Sum of all the element of the tree is : "<<sumOfTree(a)<<endl;
  cout<<"Max element of the tree is : "<<maxElementOfTree(a)<<endl;
  cout<<"Level of tree is : "<<levelOfTree(a)<<endl;
  cout<<"Height Of the tree is : "<<levelOfTree(a)-1<<endl;
  return 0;
}