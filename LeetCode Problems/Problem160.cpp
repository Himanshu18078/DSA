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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        int sizeA = 0;
        int sizeB = 0;

        while(tempA != NULL){
            sizeA++;
            tempA = tempA->next;
        }

        while(tempB != NULL){
            sizeB++;
            tempB = tempB->next;
        }

        tempA = headA;
        tempB = headB;

        int newSize = 0;

        if(sizeA > sizeB){
            newSize = sizeA - sizeB;

            while(newSize > 0){
                tempA = tempA->next;
                newSize--;
            }
        }
        else{
            newSize = sizeB - sizeA;

            while(newSize > 0){
                tempB = tempB->next;
                newSize--;
            }
        }

        while(tempA != NULL && tempB != NULL){
            if(tempA == tempB) return tempA;

            tempA = tempA->next;
            tempB = tempB->next;
        }

        return NULL;
    }
};

int main(){
    return 0;
}