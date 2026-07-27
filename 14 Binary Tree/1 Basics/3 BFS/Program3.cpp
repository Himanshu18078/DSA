// BFS OPTIMISED = Right To Left
#include <iostream>
using namespace std;
class TreeNode
{
public:
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};
// Function to print the perticular level of the tree
void displayLevel(TreeNode *root, int level, int currLevel)
{
  if (root == NULL)
    return;
  if (level == currLevel)
  {
    cout << root->val << " ";
    return;
  }
  displayLevel(root->right, level, currLevel + 1);
  displayLevel(root->left, level, currLevel + 1);
}
//Function to get total level of the tree
int levelOfTree(TreeNode* root){
  if(root == NULL) return 0;
  return 1 + max(levelOfTree(root->left) , levelOfTree(root->right));
}
// BFS DISPLAY
void bfsDisplay(TreeNode* root , int totalLevel){
  if(root == NULL) return;
  for(int i = 1 ; i <= totalLevel ; i++){
    displayLevel(root,i,1);
    cout<<endl;
  }
}
int main()
{
  TreeNode *a = new TreeNode(10);
  TreeNode *b = new TreeNode(20);
  TreeNode *c = new TreeNode(30);
  TreeNode *d = new TreeNode(40);
  TreeNode *e = new TreeNode(50);
  TreeNode *f = new TreeNode(60);
  TreeNode *g = new TreeNode(70);
  a->left = b;
  a->right = c;
  b->left = d;
  b->right = e;
  c->left = f;
  c->right = g;
  // cout<<"Total level in the tree are : "<<levelOfTree(a)<<endl;
  // displayLevel(a,2,1);
  // cout<<endl;
  bfsDisplay(a,levelOfTree(a));
  return 0;
}