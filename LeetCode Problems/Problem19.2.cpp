#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int val){
        this->val = val;
        this->next = NULL;
    }
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n){
        ListNode* temp = head;
        int size = 0;

        while(temp != NULL){
            size++;
            temp = temp->next;
        }

        if(size == n){
            head = head->next;
            return head;
        }

        temp = head;

        int index = size - n + 1;

        for(int i = 1; i < index - 1; i++){
            temp = temp->next;
        }

        temp->next = temp->next->next;

        return head;
    }
};

int main(){
    // Creating: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution solution;

    // Remove 2nd node from the end
    head = solution.removeNthFromEnd(head, 2);

    // Print linked list
    ListNode* temp = head;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}