// Remove Duplicates from Sorted List
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* temp = head;
        ListNode* curr = head;
        while(temp != nullptr){
            curr = temp->next;
            while(curr != nullptr && curr->val == temp->val){
                curr = curr->next;
            }
            temp->next = curr;
            temp = curr;
        }
        return head;
    }
};