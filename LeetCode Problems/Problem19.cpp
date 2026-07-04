#include<iostream>
using namespace std;
struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* fast = head;
    ListNode* slow = head;

    for (int i = 0; i < n + 1; i++) {
        if (fast == NULL) {          // removing the head
            return head->next;
        }
        fast = fast->next;
    }

    while (fast != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = slow->next->next;
    return head;
}
/* 
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* temp = head;
    int size = 0;
    while (temp != NULL) {
        size++;
        temp = temp->next;
    }

    int newIndex = size - n + 1;

    if (newIndex == 1) {          // removing the head
        return head->next;
    }

    temp = head;
    for (int i = 0; i < newIndex - 2; i++) {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}
*/