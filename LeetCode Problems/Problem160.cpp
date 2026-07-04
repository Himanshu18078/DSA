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
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
  ListNode *temp1 = headA;
  ListNode *temp2 = headB;
  int size1 = 0;
  int size2 = 0;
  while (temp1 != NULL)
  {
    temp1 = temp1->next;
    size1++;
  }
  while (temp2 != NULL)
  {
    temp2 = temp2->next;
    size2++;
  }
  temp1 = headA;
  temp2 = headB;
  int newSize = 0;
  if (size1 > size2)
  {
    for (int i = 0; i < size1 - size2; i++)
    {
      temp1 = temp1->next;
    }
    newSize = size2;
  }
  else
  {
    for (int i = 0; i < size2 - size1; i++)
    {
      temp2 = temp2->next;
    }
    newSize = size1;
  }
  for (int i = 0; i < newSize; i++)
  {
    if (temp1 == temp2)
    {
      return temp1;
    }
    else
    {
      temp1 = temp1->next;
      temp2 = temp2->next;
    }
  }
  return NULL;
}