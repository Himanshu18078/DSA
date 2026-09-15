#include <iostream>
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
    ListNode* reverseList(ListNode* head) {

        // Base case
        if(head == NULL || head->next == NULL) {
            return head;
        }

        // Reverse the rest of the linked list
        ListNode* newHead = reverseList(head->next);

        // Put current node at the end
        head->next->next = head;
        head->next = NULL;

        return newHead;
    }
};

int main() {
    return 0;
}