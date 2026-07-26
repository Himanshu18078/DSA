// Program to get maximum element in a tree
#include<iostream>
#include<algorithm>
#include<climits>
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
//Progam to print the tree
void printTree(TreeNode* root){
  if(root == NULL) return;
  cout<<root->val<<" ";
  printTree(root->left);
  printTree(root->right);
}
//Program to get the size of the tree
int sizeOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}
//Program to get the maximum element of the tree
int maxElement(TreeNode* root){
  if(root == NULL) return INT_MIN;
  int lMax = maxElement(root->left);
  int rMax = maxElement(root->right);
  return max(root->val,max(lMax,rMax));
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
  c->right = g;
  printTree(a);
  cout<<endl;
  cout<<"Size of the tree is : "<<sizeOfTree(a)<<endl;
  cout<<"Maximum in the tree is : "<<maxElement(a)<<endl;
}
