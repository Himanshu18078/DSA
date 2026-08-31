#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x){
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* detectCycle(ListNode* head){
        bool isCyclePresent = false;

        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(fast == slow){
                isCyclePresent = true;
                break;
            }
        }

        if(!isCyclePresent){
            return NULL;
        }

        ListNode* temp = head;

        while(temp != slow){
            temp = temp->next;
            slow = slow->next;
        }

        return temp;
    }
};

int main(){
    return 0;
}