#include <iostream>
using namespace std;
struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *deleteDuplicates(ListNode *head)
{
  if (head == NULL)
    return NULL;

  ListNode *A = head;
  ListNode *B = head->next;

  while (B != NULL)
  {
    if (A->val == B->val)
    {
      B = B->next;
    }
    else
    {
      A->next = B;
      A = B;
      B = B->next;
    }
  }
  A->next = NULL;
  return head;
}