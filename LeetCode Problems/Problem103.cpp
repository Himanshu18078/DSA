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

// Function to get total levels of the tree
int totalLevel(TreeNode *root)
{
  if (root == NULL)
    return 0;

  return 1 + max(totalLevel(root->left),
                 totalLevel(root->right));
}

// Print particular level from LEFT to RIGHT
void printLevelLeftToRight(TreeNode *root, int levelToPrint,
                           int currentLevel, vector<int> &curr)
{

  if (root == NULL)
    return;

  if (levelToPrint == currentLevel)
  {
    curr.push_back(root->val);
    return;
  }

  // Left first, then Right
  printLevelLeftToRight(root->left, levelToPrint,
                        currentLevel + 1, curr);

  printLevelLeftToRight(root->right, levelToPrint,
                        currentLevel + 1, curr);
}

// Print particular level from RIGHT to LEFT
void printLevelRightToLeft(TreeNode *root, int levelToPrint,
                           int currentLevel, vector<int> &curr)
{

  if (root == NULL)
    return;

  if (levelToPrint == currentLevel)
  {
    curr.push_back(root->val);
    return;
  }

  // Right first, then Left
  printLevelRightToLeft(root->right, levelToPrint,
                        currentLevel + 1, curr);

  printLevelRightToLeft(root->left, levelToPrint,
                        currentLevel + 1, curr);
}

// Zigzag BFS
void bfsDisplay(TreeNode *root, int levels,
                vector<vector<int>> &result)
{

  if (root == NULL)
    return;

  for (int i = 1; i <= levels; i++)
  {

    vector<int> curr;

    // Odd level -> Left to Right
    if (i % 2 != 0)
    {
      printLevelLeftToRight(root, i, 1, curr);
    }
    // Even level -> Right to Left
    else
    {
      printLevelRightToLeft(root, i, 1, curr);
    }

    result.push_back(curr);
  }
}

int main()
{

  // Creating tree
  TreeNode *a = new TreeNode(10);
  TreeNode *b = new TreeNode(20);
  TreeNode *c = new TreeNode(30);
  TreeNode *d = new TreeNode(40);
  TreeNode *e = new TreeNode(50);
  TreeNode *f = new TreeNode(60);
  TreeNode *g = new TreeNode(70);

  /*
              10
             /  \
           20    30
          / \    / \
         40 50  60 70
  */

  a->left = b;
  a->right = c;

  b->left = d;
  b->right = e;

  c->left = f;
  c->right = g;

  vector<vector<int>> result;

  bfsDisplay(a, totalLevel(a), result);

  // Print result
  cout << "Zigzag Level Order:" << endl;

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