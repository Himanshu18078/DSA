#include <iostream>
#include <vector>

using namespace std;

// ---- LeetCode-style ListNode definition ----
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;

        while (curr != nullptr) {
            next = curr->next;   // save next node
            curr->next = prev;   // reverse the pointer
            prev = curr;         // move prev forward
            curr = next;         // move curr forward
        }

        return prev;  // prev is the new head
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        // Dummies so we never dereference a null "head" pointer
        ListNode* head1 = new ListNode(0);   // segment before `left`
        ListNode* head1Pointer = head1;

        ListNode* head2 = new ListNode(0);   // segment [left, right]
        ListNode* head2Pointer = head2;

        ListNode* head3 = new ListNode(0);   // segment after `right`
        ListNode* head3Pointer = head3;

        int i = 1;
        ListNode* curr = head;

        // Copy nodes before `left`
        while (i < left) {
            head1->next = new ListNode(curr->val);
            head1 = head1->next;
            curr = curr->next;
            i++;
        }

        // Copy nodes in [left, right]
        while (i <= right) {
            head2->next = new ListNode(curr->val);
            head2 = head2->next;
            curr = curr->next;
            i++;
        }

        // Copy remaining nodes
        while (curr != nullptr) {
            head3->next = new ListNode(curr->val);
            head3 = head3->next;
            curr = curr->next;
        }

        // Reverse the middle segment (skip its dummy)
        ListNode* newHead2 = reverseList(head2Pointer->next);

        // head2Pointer->next is now the tail of the reversed segment
        ListNode* newTail2 = head2Pointer->next;

        // Splice: head1 -> reversed middle -> head3
        head1->next = newHead2;
        newTail2->next = head3Pointer->next;

        ListNode* result = head1Pointer->next;

        // Clean up dummies
        delete head1Pointer;
        delete head2Pointer;
        delete head3Pointer;

        return result;
    }
};

// ---- Helpers for testing ----
ListNode* buildList(const vector<int>& vals) {
    ListNode dummy(0);
    ListNode* tail = &dummy;
    for (int v : vals) {
        tail->next = new ListNode(v);
        tail = tail->next;
    }
    return dummy.next;
}

void printList(ListNode* head) {
    cout << "[";
    while (head) {
        cout << head->val;
        if (head->next) cout << ", ";
        head = head->next;
    }
    cout << "]\n";
}

void freeList(ListNode* head) {
    while (head) {
        ListNode* nxt = head->next;
        delete head;
        head = nxt;
    }
}

int main() {
    Solution sol;

    // Test 1: [1,2,3,4,5], left = 2, right = 4  ->  [1,4,3,2,5]
    ListNode* l1 = buildList({1, 2, 3, 4, 5});
    ListNode* r1 = sol.reverseBetween(l1, 2, 4);
    cout << "Test 1: ";
    printList(r1);
    freeList(r1);

    // Test 2: [5], left = 1, right = 1  ->  [5]
    ListNode* l2 = buildList({5});
    ListNode* r2 = sol.reverseBetween(l2, 1, 1);
    cout << "Test 2: ";
    printList(r2);
    freeList(r2);

    // Test 3: [1,2,3], left = 1, right = 3  ->  [3,2,1]
    ListNode* l3 = buildList({1, 2, 3});
    ListNode* r3 = sol.reverseBetween(l3, 1, 3);
    cout << "Test 3: ";
    printList(r3);
    freeList(r3);

    // Test 4: [1,2,3,4,5], left = 1, right = 5  ->  [5,4,3,2,1]
    ListNode* l4 = buildList({1, 2, 3, 4, 5});
    ListNode* r4 = sol.reverseBetween(l4, 1, 5);
    cout << "Test 4: ";
    printList(r4);
    freeList(r4);

    return 0;
}