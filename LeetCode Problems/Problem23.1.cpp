#include <iostream>
#include <vector>
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

    ListNode* mergeTwoSortedList(ListNode* a, ListNode* b) {
        ListNode* tempA = a;
        ListNode* tempB = b;

        ListNode* tempC = new ListNode(INT_MIN);
        ListNode* head = tempC;

        while(tempA != NULL && tempB != NULL) {
            if(tempA->val <= tempB->val) {
                tempC->next = tempA;
                tempC = tempC->next;
                tempA = tempA->next;
            }
            else {
                tempC->next = tempB;
                tempC = tempC->next;
                tempB = tempB->next;
            }
        }

        if(tempA == NULL)
            tempC->next = tempB;
        else
            tempC->next = tempA;

        return head->next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if(lists.empty())
            return NULL;

        while(lists.size() > 1) {

            ListNode* tempA = lists[lists.size() - 1];
            lists.pop_back();

            ListNode* tempB = lists[lists.size() - 1];
            lists.pop_back();

            ListNode* C = mergeTwoSortedList(tempA, tempB);

            lists.push_back(C);
        }

        return lists[0];
    }
};

int main() {
    return 0;
}