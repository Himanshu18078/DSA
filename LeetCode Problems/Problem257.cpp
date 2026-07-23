#include<iostream>
#include<vector>
#include<string>
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
//Function to print the tree
void printTree(TreeNode* root){
  if(root == NULL) return;
  cout<<root->val<<" ";
  printTree(root->left);
  printTree(root->right);
}
//Function to get Tree Paths
void helper(TreeNode* root, vector<string>& result, string str) {
        if (root == NULL)
            return;

        string a = to_string(root->val);

        // Leaf node
        if (root->left == NULL && root->right == NULL) {
            str += a;
            result.push_back(str);
            return;
        }

        helper(root->left, result, str+a+"->");
        helper(root->right, result, str+a+"->");
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        helper(root, result, "");
        return result;
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
  printTree(a);
  cout<<endl;
  vector<string> result = binaryTreePaths(a);
  for(string s : result){
    cout<<s<<" ";
  }
  return 0;
}