// Reverse Linked List II
#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode(int x){
        val = x;
        next = nullptr;
    }
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == nullptr || head->next == nullptr || left == right) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;

        for(int i = 1; i < left; i++){
            prev = prev->next;
        }
        ListNode* curr = prev->next;
        for(int i = 0; i < right - left; i++){
            ListNode* temp = curr->next;
            // ek element ko LL me se delete krdo
            curr->next = temp->next;
            // Us element ko add krdo prev pos pr
            temp->next = prev->next;
            prev->next = temp;
        }
        return dummy->next;
    }
};
