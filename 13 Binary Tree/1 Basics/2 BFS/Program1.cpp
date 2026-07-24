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
//Fucntion to print the perticular level of the tree
void display( TreeNode* root , int level,int currLevel){
  if(root == NULL) return;
  if(currLevel == level){
    cout<<root->val<<" ";
  }
  display(root->left,level,currLevel+1);
  display(root->right,level,currLevel+1);
}
//function to get the total level of the tree
int levelOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return 1 + max(levelOfTree(root->left) , levelOfTree(root->right));
}
//function to print the tree is BFS
void bfsDisplay(TreeNode* root , int totalLevel){
  if(root == NULL) return;
  for(int i = 1; i <= totalLevel ; i ++){
    display(root,i,1);
    cout<<endl;
  }
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
  display(a,2,1);
  cout<<endl;
  cout<<"Total level of the tree are : "<<levelOfTree(a)<<endl;
  bfsDisplay(a,levelOfTree(a));
}