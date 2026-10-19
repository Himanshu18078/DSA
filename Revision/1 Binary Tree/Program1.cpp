// Tree implementation
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
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};
//Fucntion to print the tree
void printTree(TreeNode* root){
  if(root == NULL) return;
  cout<<root->val<<" ";
  printTree(root->left);
  printTree(root->right);
}
//Sum of all node;
int sumOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return root->val + sumOfTree(root->left) + sumOfTree(root->right);
}
//Size of the tree
int sizeOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}
//Maximum element of the tree
int maxElementOFTree(TreeNode* root){
  if(root == NULL) return INT_MIN;
  return max(root->val , max(maxElementOFTree(root->left) , maxElementOFTree(root->right)));
}
//Maximum element of the tree
int minElementOFTree(TreeNode* root){
  if(root == NULL) return INT_MAX;
  return min(root->val , min(minElementOFTree(root->left) , minElementOFTree(root->right)));
}
// Level of the tree
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
  c->right = g;

  printTree(a);
  cout<<endl;
  cout<<"Sum of tree is : "<<sumOfTree(a)<<endl;
  cout<<"Size of tree is : "<<sizeOfTree(a)<<endl;
  cout<<"Maximum element of tree is : "<<maxElementOFTree(a)<<endl;
  cout<<"Minimum element of tree is : "<<minElementOFTree(a)<<endl;
  cout<<"Level of tree is : "<<levelOfTree(a)<<endl;
  cout<<"Height of tree is : "<<levelOfTree(a)-1<<endl;
}