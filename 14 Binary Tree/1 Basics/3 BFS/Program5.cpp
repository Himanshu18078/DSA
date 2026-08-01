// Level order Treaversal using queue
#include<iostream>
#include<queue>
using namespace std;
class TreeNode{
  public:
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int val){
    this->val = val;
    left = NULL;
    right = NULL;
  }
};
//Pre order traversal
void printTree(TreeNode* root){
  if(root == NULL) return;
  cout<<root->val<<" ";
  printTree(root->left);
  printTree(root->right);
}
//Level Order Traversal using queue
void printTreeBFS(TreeNode* root){
  queue<TreeNode* >queue;
  queue.push(root);
  while (!queue.empty())
  {
    TreeNode* temp = queue.front();  
    /* iski need yha pe iss liye hai bcz hum recursion thodi use krr rhe hai */
    queue.pop();
    cout<<temp->val<<" ";
    if(temp->left != NULL) queue.push(temp->left);
    if(temp->right != NULL) queue.push(temp->right);
  }
  cout<<endl;
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
  // printTree(a);
  printTreeBFS(a);
  return 0;
}