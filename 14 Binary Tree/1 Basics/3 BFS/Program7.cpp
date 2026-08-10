#include<iostream>
#include<stack>
#include<queue>
#include<climits>
#include<vector>
#include<algorithm>
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
};
//Function for Post Order Traveral (Iterative)
void postOrderTraversal(TreeNode* root){
  if(root == NULL) return;
  cout<<"POST-ORDER TRAVERSAL : "<<endl;
  stack<TreeNode*> s;
  vector<int> v;
  s.push(root);
  while(!s.empty()){
    TreeNode* temp = s.top();
    s.pop();
    v.push_back(temp->val);
    if(temp->left) s.push(temp->left);
    if(temp->right) s.push(temp->right);
  }
  reverse(v.begin(),v.end());
  for(int i = 0 ; i < v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
int main(){
  int arr[] = {1,2,3,4,5,6,7};
  TreeNode* root = constructTree(arr , 7);
  postOrderTraversal(root);
}