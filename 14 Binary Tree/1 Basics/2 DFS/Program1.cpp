// PREORDER
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
//PREORDER DISPAY
void preorderDisplay(TreeNode* root){
  if(root == NULL) return;
  cout<<root->val<<" ";
  preorderDisplay(root->left);
  preorderDisplay(root->right);
}
//INORDER DISPLAY
void inorderDisplay(TreeNode* root){
  if(root == NULL) return;
  inorderDisplay(root->left);
  cout<<root->val<<" ";
  inorderDisplay(root->right);
}
//POSTORDER DISPLAY
void postorderDisplay(TreeNode* root){
  if(root == NULL) return;
  postorderDisplay(root->left);
  postorderDisplay(root->right);
  cout<<root->val<<" ";
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
  cout<<"PREORDER DISPLAY : "<<endl;
  preorderDisplay(a);
  cout<<endl;
  cout<<"INORDER DISPLAY : "<<endl;
  inorderDisplay(a);
  cout<<endl;
  cout<<"POSTORDER DISPLAY : "<<endl;
  postorderDisplay(a);
  cout<<endl;
}