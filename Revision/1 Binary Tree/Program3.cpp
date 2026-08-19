// DFS Based Traversal
#include<iostream>
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
//Program for Pre-Order Traversal using Recursion
void preOrder(TreeNode* root){
  if(root == NULL) return;
  cout<<root->val<<" ";
  preOrder(root->left);
  preOrder(root->right);
}
//Program for In-Order Traversal using Recursion
void inOrder(TreeNode* root){
  if(root == NULL) return;
  inOrder(root->left);
  cout<<root->val<<" ";
  inOrder(root->right);
}
//Program for Post-Order Traversal using Recursion
void postOrder(TreeNode* root){
  if(root == NULL) return;
  postOrder(root->left);
  postOrder(root->right);
  cout<<root->val<<" ";
}
//Program for Reversed Pre-Order Traversal using Recursion
void reversedPreOrder(TreeNode* root){
  if(root == NULL) return;
  cout<<root->val<<" ";
  reversedPreOrder(root->right);
  reversedPreOrder(root->left);
}
//Program for Reversed In-Order Traversal using Recursion
void reversedInOrder(TreeNode* root){
  if(root == NULL) return;
  reversedInOrder(root->right);
  cout<<root->val<<" ";
  reversedInOrder(root->left);
}
//Program for Reversed Post-Order Traversal using Recursion
void reversedPostOrder(TreeNode* root){
  if(root == NULL) return;
  reversedPostOrder(root->right);
  reversedPostOrder(root->left);
  cout<<root->val<<" ";
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
  cout<<"Pre-Order Traversal : "<<endl;
  preOrder(a);
  cout<<endl;
  cout<<"In-Order Traversal : "<<endl;
  inOrder(a);
  cout<<endl;
  cout<<"Post-Order Traversal : "<<endl;
  postOrder(a);
  cout<<endl;
  cout<<"Reversed Pre-Order Traversal : "<<endl;
  reversedPreOrder(a);
  cout<<endl;
  cout<<"Reversed In-Order Traversal : "<<endl;
  reversedInOrder(a);
  cout<<endl;
  cout<<"Reversed Post-Order Traversal : "<<endl;
  reversedPostOrder(a);
  cout<<endl;
  return 0;
}