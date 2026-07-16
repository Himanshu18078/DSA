#include <iostream>
using namespace std;

// Definition for a binary tree node.
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

bool isSameTree(TreeNode *p, TreeNode *q)
{
  if (p == NULL && q == NULL)
    return true;

  if ((p == NULL && q != NULL) || (p != NULL && q == NULL))
    return false;

  if (p->val != q->val)
    return false;

  bool isLeftSame = isSameTree(p->left, q->left);
  if (!isLeftSame)
    return false;

  bool isRightSame = isSameTree(p->right, q->right);
  if (!isRightSame)
    return false;

  return true;
}

int main()
{
  // Tree 1
  TreeNode *p = new TreeNode(1);
  p->left = new TreeNode(2);
  p->right = new TreeNode(3);

  // Tree 2
  TreeNode *q = new TreeNode(1);
  q->left = new TreeNode(2);
  q->right = new TreeNode(3);
  if(isSameTree(p , q)){
    cout<<"Same Tree"<<endl;
  }else{
    cout<<"Not same"<<endl;
  }
  return 0;
}