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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
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
};

int main() {
    return 0;
}