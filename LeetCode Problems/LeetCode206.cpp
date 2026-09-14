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

        ListNode* curr = head;
        ListNode* NEXT = NULL;
        ListNode* prev = NULL;

        while(curr != NULL) {

            NEXT = curr->next;
            curr->next = prev;
            prev = curr;
            curr = NEXT;
        }

        return prev;
    }
};

int main() {
    return 0;
}