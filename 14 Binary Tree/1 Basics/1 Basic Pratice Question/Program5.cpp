// Creating a tree using array and queue
#include<iostream>
#include<queue>
#include<climits>
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
TreeNode* constructTree(int arr[] , int size){
  queue<TreeNode* >q;
  TreeNode* root = new TreeNode(arr[0]);
  q.push(root);
  int i = 1;
  int j = 2;
  while (!q.empty() && i<size)
  {
    TreeNode* temp = q.front();
    q.pop();
    TreeNode* l;
    TreeNode* r;
    if(arr[i] != INT_MIN) l = new TreeNode(arr[i]);
    else l = NULL;
    if(j != size && arr[j] != INT_MIN) r = new TreeNode(arr[j]);
    else r = NULL;

    temp->left = l;
    temp->right = r;

    if(l!= NULL) q.push(l);
    if(r!= NULL) q.push(r);

    i+= 2;
    j+= 2;
  }
  return root;
}
void levelOrderTraversal(TreeNode* root){
  queue<TreeNode* >queue;
  queue.push(root);
  while (!queue.empty())
  {
    TreeNode* temp = queue.front();  
    queue.pop();
    cout<<temp->val<<" ";
    if(temp->left != NULL) queue.push(temp->left);
    if(temp->right != NULL) queue.push(temp->right);
  }
  cout<<endl;
}
int main(){
  int arr[] = {1,2,3,4,INT_MIN,6,7,INT_MIN};
  int size = sizeof(arr)/sizeof(arr[0]);
  TreeNode* root = constructTree(arr,size);
  levelOrderTraversal(root);
}