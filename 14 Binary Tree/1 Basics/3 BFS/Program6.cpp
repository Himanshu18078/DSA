// Preorder Traversal (Iterative)
#include<iostream>
#include<stack>
#include<queue>
#include<climits>
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
//Function to create a tree
TreeNode *constructTree(int arr[], int size)
{
  if (size == 0) return NULL;
  queue<TreeNode *> q;
  TreeNode *root = new TreeNode(arr[0]);
  q.push(root);
  int i = 1;
  int j = 2;
  while (!q.empty() && i < size)
  {
    TreeNode *temp = q.front();
    q.pop();
    TreeNode *l;
    TreeNode *r;
    if (arr[i] != INT_MIN)l = new TreeNode(arr[i]);
    else l = NULL;
    if (j != size && arr[j] != INT_MIN) r = new TreeNode(arr[j]);
    else r = NULL;

    temp->left = l;
    temp->right = r;
    
    if (l != NULL)
      q.push(l);
    if (r != NULL)
      q.push(r);

    i += 2;
    j += 2;
  }
  return root;
}
// Function for the PRE-ORDER traversal (iterative)
void preOrderTraversal(TreeNode* root){
  if (root == NULL) return;
  cout<<"Pre-Order Traversal : "<<endl;
  stack<TreeNode* > s;
  s.push(root);
  while (!s.empty())
  {
    TreeNode* temp = s.top();
    s.pop();
    cout<<temp->val<<" ";
    //Here we have push right first because of the stack which has LIFO property
    if(temp->right) s.push(temp->right);
    if(temp->left) s.push(temp->left);
  }
  cout<<endl;
}

int main(){
  int arr[] = {1,2,3,4,5,6,7};
  TreeNode* root = constructTree(arr,7);
  preOrderTraversal(root);
}