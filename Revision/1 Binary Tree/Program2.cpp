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
// Function to get the size of the tree
int sizeOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}
// Function to get the sum of the tree
int sumOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return root->val + sumOfTree(root->left) + sumOfTree(root->right);
}
//Function to print the maximum element of the tree
int maxElement(TreeNode* root){
  if(root == NULL) return 0;
  return max(root->val , max(maxElement(root->left),maxElement(root->right)));
}
//Function to get the level of the tree
int levelOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return 1 + max(levelOfTree(root->left) , levelOfTree(root->right));
}
//function to get the diameter of the tree
//the following function give me the diameter of with respect to the single node only
void helper(TreeNode *root , int &maxDia){
  if(root == NULL) return;
  int dia = levelOfTree(root->left) + levelOfTree(root->right);
  maxDia = max(dia, maxDia);
  helper(root->left , maxDia);
  helper(root->right , maxDia);
}
int diameterOfTheTree(TreeNode* root){
  int maxDia = 0;
  helper(root , maxDia);
  return maxDia;
}

int main(){
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
  c->right =g;
  printTree(a);
  cout<<endl;
  cout<<"Size of the tree is : "<<sizeOfTree(a)<<endl;
  cout<<"Sum of the tree is : "<<sumOfTree(a)<<endl;
  cout<<"Maximum Element of the tree is : "<<maxElement(a)<<endl;
  cout<<"Level of the tree is : "<<levelOfTree(a)<<endl;
  cout<<"Height of the tree is : "<<levelOfTree(a)-1<<endl;
  cout<<"Daimeter of the tree is : "<<diameterOfTheTree(a)<<endl;
}