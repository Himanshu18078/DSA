// To get the diameter of the binary tree// Basic tree
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
//following the code is to calculate the level + daimeter of the tree
int maxDiameter = 0;
//function to get the level of the tree
int levelOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return 1 + max(levelOfTree(root->left) , levelOfTree(root->right)); 
}
int diameterOfTree(TreeNode* root){
  if(root == NULL) return 0;
  int diameter =  levelOfTree(root->left) + levelOfTree(root->right);
  maxDiameter = max(maxDiameter,diameter);
  diameterOfTree(root->left);
  diameterOfTree(root->right);
  return maxDiameter;
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
  cout<<"Level of the tree is : "<<levelOfTree(a)<<endl;
  cout<<"Diameter of the tree is : "<<diameterOfTree(a)<<endl;
  return 0;
}