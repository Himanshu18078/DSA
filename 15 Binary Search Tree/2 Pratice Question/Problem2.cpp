// Program to insert in a binary search tree
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
// Function to find element in the binary tree
void searchBST(TreeNode* root, int val){
  if(root == NULL){
    cout<<"Element is not present in the tree...";
    return;
  }
  if(root->val == val){
    cout<<"Element present in the binary tree";
    return;
  }
  if(val > root->val)
    searchBST(root->right, val);
  if(val < root->val)
    searchBST(root->left, val);
}
//Function to insert in a binary tree(Here we are assuming that the value is not present in the tree)
TreeNode* insertIntoBST(TreeNode* root, int val){
    if(root == NULL){
        return new TreeNode(val);
    }
    TreeNode* temp = root;
    TreeNode* parent = NULL;
    while(temp != NULL){
        parent = temp;

        if(val > temp->val){
            temp = temp->right;
        }
        else{
            temp = temp->left;
        }
    }
    TreeNode* newNode = new TreeNode(val);
    if(val > parent->val)
        parent->right = newNode;
    else
        parent->left = newNode;
    return root;
}
int main(){
  TreeNode* a = new TreeNode(1);
  TreeNode* b = new TreeNode(2);
  TreeNode* c = new TreeNode(3);
  TreeNode* d = new TreeNode(4);
  TreeNode* e = new TreeNode(5);
  TreeNode* f = new TreeNode(6);
  TreeNode* g = new TreeNode(7);
  d->left = b;
  d->right = f;
  b->left = a;
  b->right = c;
  f->left = e;
  f->right = g;
  searchBST(d , 4);
  cout<<endl;
  insertIntoBST(d,8);
  searchBST(d,8);
  cout<<endl;
  return 0;
}