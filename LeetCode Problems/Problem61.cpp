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
ListNode* rotateRight(ListNode* head, int k) {
    if (head == NULL || head->next == NULL || k == 0)
        return head;

    ListNode* temp = head;
    int size = 1;

    while (temp->next != NULL) {
        temp = temp->next;
        size++;
    }

    k %= size;
    if (k == 0)
        return head;

    temp->next = head;  // make circular

    temp = head;
    for (int i = 0; i < size - k - 1; i++)
        temp = temp->next;

    head = temp->next;
    temp->next = NULL;

    return head;
}