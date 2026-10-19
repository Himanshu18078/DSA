#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
class TreeNode{
  public:
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int val){
    this->left = NULL;
    this->right = NULL;
    this->val = val;
  }
};
// Function to print the tree
void printTree(TreeNode* head){
  if(head == NULL) return;
  printTree(head->left);
  cout<<head->val<<" ";
  printTree(head->right);
}
//function to get the diameter of the binary tree
int heightOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return 1 + max(heightOfTree(root->left) , heightOfTree(root->right));
}
//helper function 
void helper(TreeNode* root , int &maxDia){
  if(root == NULL) return;
  int dia = heightOfTree(root->left) + heightOfTree(root->right);
  maxDia = max(dia , maxDia);
  helper(root->left , maxDia);
  helper(root->right , maxDia);
}
//diameter of the binary tree
int diameterOfTheTree(TreeNode* root){
  int diameter = 0;
  helper(root , diameter);
  return diameter;
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
  cout<<"Diameter of the bianry Tree is : "<<diameterOfTheTree(a)<<endl;
}