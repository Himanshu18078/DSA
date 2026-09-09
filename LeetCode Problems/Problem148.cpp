#include <iostream>
#include <climits>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:

    ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode* tempA = list1;
        ListNode* tempB = list2;

        ListNode* tempC = new ListNode(INT_MIN);
        ListNode* head = tempC;

        while(tempA != NULL && tempB != NULL) {

            if(tempA->val > tempB->val) {
                tempC->next = tempB;
                tempB = tempB->next;
                tempC = tempC->next;
            }
            else {
                tempC->next = tempA;
                tempA = tempA->next;
                tempC = tempC->next;
            }
        }

        if(tempA == NULL)
            tempC->next = tempB;
        else
            tempC->next = tempA;

        return head->next;
    }

    ListNode* sortList(ListNode* head) {

        if(head == NULL || head->next == NULL)
            return head;

        ListNode* fast = head;
        ListNode* slow = head;

        // Find the middle of the linked list
        while(fast->next != NULL && fast->next->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }

        // Split the list into two halves
        ListNode* a = head;
        ListNode* b = slow->next;

        slow->next = NULL;

        // Sort both halves
        a = sortList(a);
        b = sortList(b);

        // Merge the sorted halves
        ListNode* c = merge(a, b);

        return c;
    }
};

int main() {
    return 0;
}