// Program for BFS using recusrion in reversed order
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
  }
};
// Function to get total level of the tree
int levelsInTree(TreeNode* root){
  if(root ==  NULL) return 0;
  return 1 + max(levelsInTree(root->left) , levelsInTree(root->right));
}
//Function to print perticular level of the tree
void printLevelOfTree(TreeNode* root , int currLevel , int levelToPrint){
  if(root == NULL) return;
  if(currLevel == levelToPrint){
    cout<<root->val<<" ";
    return;
  };
  printLevelOfTree(root->right , currLevel+1 , levelToPrint);
  printLevelOfTree(root->left , currLevel+1 , levelToPrint);
}
//Function for BFS using recursion
void BFSPrint(TreeNode* root){
  int level = levelsInTree(root);
  for(int i = 0; i < level ; i++){
    printLevelOfTree(root , 0 , i);
    cout<<endl;
  }
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
  BFSPrint(a);
  return 0;
}