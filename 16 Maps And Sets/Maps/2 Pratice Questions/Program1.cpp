// Program for printing the top view of a binary tree
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
// Function to create tree
TreeNode* createTree(vector<int> &v){
    TreeNode* root = new TreeNode(v[0]);
    queue<TreeNode*>q;
    q.push(root);
    int i = 1;

    while(!q.empty() && i < v.size()){
        TreeNode* temp = q.front();
        q.pop();

        TreeNode* l;
        TreeNode* r;

        if(v[i] != INT_MIN) l = new TreeNode(v[i]);
        else l = NULL;
        temp->left = l;

        i++;

        if(i < v.size() && v[i] != INT_MIN) r = new TreeNode(v[i]);
        else r = NULL;
        temp->right = r;

        if(l != NULL) q.push(l);
        if(r != NULL) q.push(r);

        i++;
    }

    return root;
}
// function 

int main(){
  vector<int>v {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
  TreeNode* root = createTree(v);
}