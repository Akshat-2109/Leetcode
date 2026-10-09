// Remove Linked List Elements
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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return head;
        while(head->val == val){
            if(head->next == nullptr){
                head = head->next;
                return head;
            }else{
                head = head->next;
            }
        }
        ListNode* temp = head;
        while(temp != nullptr && temp->next != nullptr){
            if(temp->next->val == val){
                temp->next = temp->next->next;
            }else{
                temp = temp->next;
            }
            
        }
        return head;
    }
};