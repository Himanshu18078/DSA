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
bool sameTree(TreeNode* rootA , TreeNode* rootB){
  if(rootA == NULL && rootB == NULL) return true;
  if(rootA == NULL && rootB != NULL || rootB == NULL && rootA != NULL) return false;
  if(rootA->val != rootB->val) return false;
  sameTree(rootA->left , rootB->left);
  sameTree(rootA->right , rootB->right);
  return true;
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
  
}