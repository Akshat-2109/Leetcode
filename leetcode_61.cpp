// Rotate List
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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr)
            return head;

        int len = 1;
        ListNode* curr = head;

        while (curr->next != nullptr) {
            curr = curr->next;
            len++;
        }

        k = k % len;
        // LL ko circular LL bnadiya
        curr->next = head;
        curr = head;
        int step = len - k;

        for(int i = 1; i<step; i++){
            curr = curr->next;
        }
        // Circular LL to LL bnadiya
        head = curr->next;
        curr->next = nullptr;
        return head;
    }
};