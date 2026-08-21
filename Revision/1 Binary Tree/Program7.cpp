// Program to get a tree with the help of a array and a queue
#include<iostream>
#include<queue>
#include<vector>
#include<climits>
using namespace std;
class TreeNode {
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
//function to create a tree
TreeNode* createTree(vector<int> &v){
  TreeNode* root = new TreeNode(v[0]);
  queue<TreeNode*> q;
  q.push(root);
  int i = 1;
  int j = 2;
  while (!q.empty() && i < v.size())
  {
    TreeNode* temp = q.front();
    q.pop();
    TreeNode* l;
    TreeNode* r;
    if(v[i] != INT_MIN) l = new TreeNode(v[i]);
    else l = NULL; 
    temp->left = l;
    if(j < v.size() && v[j] != INT_MIN) r = new TreeNode(v[j]);
    else r = NULL;
    temp->right = r;

    if(l != NULL) q.push(l);
    if(r != NULL) q.push(r);
    i+=2;
    j+=2;
  }
  return root;
}
// Function to print the tree using BFS using QUEUE
void printTree(TreeNode* root){
  queue<TreeNode*> q;
  q.push(root);
  while(!q.empty()){
    TreeNode* temp = q.front();
    q.pop();
    cout<<temp->val<<" ";
    if(temp->left) q.push(temp->left);
    if(temp->right) q.push(temp->right);
  }
}
int main(){
vector<int> v{1,2,3,4,5,6,INT_MIN,8};
TreeNode* root = createTree(v);
printTree(root);
}