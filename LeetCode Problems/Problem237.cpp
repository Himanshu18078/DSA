// DELETE THE NODE IF WE DON'T HAVE THE HEAD
#include <iostream>
using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
void deleteNode(ListNode *node)
{
  node->val = node->next->val;
  node->next = node->next->next;
}