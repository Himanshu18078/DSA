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
// function to get the sum of all the nodes
int sumTree(TreeNode* head){
  if(head == NULL) return 0;
  return head->val + sumTree(head->left) + sumTree(head->right);

}
//function to get the size of the array
int sizeTree(TreeNode* root){
  if(root == NULL) return 0;
  return 1 + sizeTree(root->left) + sizeTree(root->right);
}
//function to get maximum element of the tree
int maxElement(TreeNode* root){
  if(root == NULL) return INT_MIN;
  return max(root->val, max(maxElement(root->left), maxElement(root->right)));
}
//function to get the level of the tree
int levelOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return 1 + max(levelOfTree(root->left) , levelOfTree(root->right));
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
  cout<<"Sum of tree is : "<<sumTree(a)<<endl;
  cout<<"Size of tree is : "<<sizeTree(a)<<endl;
  cout<<"Max Element of tree is : "<<maxElement(a)<<endl;
}