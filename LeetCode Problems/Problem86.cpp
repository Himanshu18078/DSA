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
    ListNode* partition(ListNode* head, int x) {
        ListNode* tl = new ListNode(INT_MIN);
        ListNode* th = new ListNode(INT_MIN);

        ListNode* temp = head;

        ListNode* tlh = tl;
        ListNode* thh = th;

        while(temp != NULL) {

            if(temp->val < x) {
                tl->next = temp;
                tl = tl->next;
                temp = temp->next;
            }
            else {
                th->next = temp;
                th = th->next;
                temp = temp->next;
            }
        }

        // End the greater/equal list
        th->next = NULL;

        // Connect both lists
        tl->next = thh->next;

        return tlh->next;
    }
};

int main() {
    return 0;
}