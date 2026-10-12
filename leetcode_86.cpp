// Partition List
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode lessdummy(0);
        ListNode greaterdummy(0);

        ListNode* less = &lessdummy;
        ListNode* greater = &greaterdummy;

        ListNode* curr = head;

        while(curr != nullptr){
            if(curr->val < x){
                less->next = curr;
                less = less->next;
            }else{
                greater->next = curr;
                greater = greater->next;
            }
            curr = curr->next;
        }
        greater->next = nullptr;
        less->next = greaterdummy.next;

        return lessdummy.next;
    }
};