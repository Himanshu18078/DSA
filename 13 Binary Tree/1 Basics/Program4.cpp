#include<iostream>
#include<climits>
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
//Function to print the Tree
void printTree(TreeNode* root){
  if(root == NULL) return;
  cout<<root->val<<" ";
  printTree(root->left);
  printTree(root->right);
}
//function to get the size of the Tree
int sizeOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}
//function to get the sum of the tree
int sumOfTree(TreeNode* root){
  if(root == NULL)return 0;
  return root->val + sumOfTree(root->left) + sumOfTree(root->right);
};
//function to get the maximum element of the tree
int maxTreeElement(TreeNode* root){
  if(root == NULL) return INT_MIN;
  int lMax = maxTreeElement(root->left);
  int rMax = maxTreeElement(root->right);
  return max(root->val, max(lMax,rMax));
}
//function to get the level of the tree
int heightOfTree(TreeNode* root){
  if (root == NULL) return 0;
  return 1 + max(heightOfTree(root->left) , heightOfTree(root->right));
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
  c->left = f;
  c->right = g;
  printTree(a);
  cout<<endl;
  cout<<"Size of the tree is : "<<sizeOfTree(a)<<endl;
  cout<<"Sum of the tree is : "<<sumOfTree(a)<<endl;
  cout<<"Maximum Element of the tree is : "<<maxTreeElement(a)<<endl;
  cout<<"Height of the tree is : "<<heightOfTree(a)<<endl;
  cout<<"Level of the tree is : "<<heightOfTree(a)-1;
  return 0;
}