// Revising Tree
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
  };
};
// Function to print the tree
void printTree(TreeNode* root){
  if(root == NULL) return;
  cout<<root->val<<" ";
  printTree(root->left);
  printTree(root->right);
}
//function to print the size of the tree
int sizeOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}
//function to get the maximum element of the tree
int maxElementOfTree(TreeNode* root){
  if(root == NULL) return 0;
  int maxLeft = maxElementOfTree(root->left);
  int maxRight = maxElementOfTree(root->right);
  return max(root->val , max(maxRight , maxRight));
}
//function to get level of the tree
int levelOfTree(TreeNode* root){
  if(root == NULL) return 0;
  int leftLevel = levelOfTree(root->left);
  int rightLevel = levelOfTree(root->right);
  return 1 + max(leftLevel , rightLevel);
}
//function to print the diameter of the tree
//variable to store the maximum diameter
// int maxDia = 0; we don't want this global variable
int helper(TreeNode* root , int &maxDia){
  if(root == NULL) return 0;
  int leftHeight = levelOfTree(root->left);
  int rightHeight = levelOfTree(root->right);
  int dia = leftHeight + rightHeight;
  maxDia = max(dia,maxDia);
  helper(root->left,maxDia);
  helper(root->right,maxDia);
}
int diameterOfTree(TreeNode* root){
  int maxDia = 0;
  helper(root,maxDia);
  return maxDia;
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
  // (*b).left = d;
  b->left = d;
  b->right = e;
  c->left = f;
  c->right = g; 
  printTree(a);
  cout<<endl;
  cout<<"Size of the tree is : "<<sizeOfTree(a)<<endl;
  cout<<"Max value of the tree is : "<<maxElementOfTree(a)<<endl;
  cout<<"Level Of the tree is : "<<levelOfTree(a)<<endl;
  cout<<"Height of the tree is : "<<levelOfTree(a) - 1<<endl;
  cout<<"Diameter of the tree is : "<<diameterOfTree(a)<<endl;
}