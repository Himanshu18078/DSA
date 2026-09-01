#include<iostream>
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
//Function to print the Binary Tree
void printTree(TreeNode* root){
  if(root == NULL) return;
  cout<<root->val<<" ";
  printTree(root->left);
  printTree(root->right);
}
//Function to get the size of the binary tree
int sizeOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}
//Fucntion to get the sum of the binary tree
int sumOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return root->val + sumOfTree(root->left) + sumOfTree(root->right);
}
//Function to get the maximum element of the binary tree
int maxElementOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return max(root->val , max(maxElementOfTree(root->left) , maxElementOfTree(root->right)));
}
//Function to get the minimum element 
int minElementOfTree(TreeNode* root){
  if(root == NULL) return INT_MAX;
  return min(root->val , min(minElementOfTree(root->left) , minElementOfTree(root->right)));
}
//Funtion to get the level of the binary tree
int levelOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return 1 + max(levelOfTree(root->left) ,levelOfTree(root->right)); 
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
  b->right =e;
  c->left = f;
  c->right =g;
  printTree(a);
  cout<<endl;
  int size = sizeOfTree(a);
  cout<<"Size of the binary Tree is : "<<size<<endl;
  int sum = sumOfTree(a);
  cout<<"sum of the binary Tree is : "<<sum<<endl;
  int max = maxElementOfTree(a);
  cout<<"max of the binary Tree is : "<<max<<endl;
  int min = minElementOfTree(a);
  cout<<"min of the binary Tree is : "<<min<<endl;
  int level = levelOfTree(a);
  cout<<"level of the binary Tree is : "<<level<<endl;
  int height = levelOfTree(a);
  cout<<"height of the binary Tree is : "<<level-1<<endl;
  return 0;
}