// Program to print boundry element of the tree
#include<iostream>
#include<vector>
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
// Function to print the left boundry of the tree
void printLeftBoundry(TreeNode* root){
  if(root == NULL) return;
  if(root->left == NULL && root->right == NULL) return;
  cout<<root->val<<" ";
  printLeftBoundry(root->left);
  if(root->left == NULL) printLeftBoundry(root->right);
}
//function to print the leaf element of the tree
void printLeafElement(TreeNode* root){
  if(root == NULL) return;
  if(root->left == NULL && root-> right == NULL) cout<<root->val<<" ";
  printLeafElement(root->left);
  printLeafElement(root->right);
}
// function to print right bournfry of the tree
void printRightBoundry(TreeNode* root){
  if(root == NULL) return;
  if(root->left == NULL && root->right == NULL) return;
  cout<<root->val<<" ";
  printRightBoundry(root->right);
  if(root->right == NULL) printRightBoundry(root->left);
}
void printBoundryElement(TreeNode* root){
  cout<<"Left Boundry : ";
  printLeftBoundry(root);
  cout<<endl;
  cout<<"Leaf elements : ";
  printLeafElement(root);
  cout<<endl;
  cout<<"Right Boundry : ";
  printRightBoundry(root->right);
cout<<endl;
}
int main(){
vector<int> v{1,2,3,4,5,6,7,8,INT_MIN,9,10,INT_MIN,11,12,13,14,15,INT_MIN,INT_MIN,16,17,18,19,INT_MIN,INT_MIN,20,21};
TreeNode* root = createTree(v);
printBoundryElement(root);
};