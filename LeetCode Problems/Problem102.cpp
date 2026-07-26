#include <iostream>
#include <vector>
#include <algorithm>
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

// Get total levels of tree
int levelOfTree(TreeNode *root)
{
  if (root == NULL)
    return 0;

  return 1 + max(levelOfTree(root->left),
                 levelOfTree(root->right));
}

// Store nodes of a particular level
void printLevel(TreeNode *root, int levelToPrint,
                int currentLevel, vector<int> &curr)
{

  if (root == NULL)
    return;

  if (levelToPrint == currentLevel)
  {
    curr.push_back(root->val);
    return;
  }

  printLevel(root->left, levelToPrint, currentLevel + 1, curr);
  printLevel(root->right, levelToPrint, currentLevel + 1, curr);
}

// BFS Display
void bfsDisplay(TreeNode *root, int totalLevel,
                vector<vector<int>> &result)
{

  if (root == NULL)
    return;

  for (int i = 1; i <= totalLevel; i++)
  {

    vector<int> curr;

    printLevel(root, i, 1, curr);

    result.push_back(curr);
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

  vector<vector<int>> result;

  bfsDisplay(a, levelOfTree(a), result);

  // Print result
  for (int i = 0; i < result.size(); i++)
  {
    for (int j = 0; j < result[i].size(); j++)
    {
      cout << result[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}