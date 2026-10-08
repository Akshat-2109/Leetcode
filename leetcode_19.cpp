// Remove Nth Node From End of List
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) : val(x), next(nullptr) {}
};



// Using my Approch
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* point = head;
    ListNode* curr = head;
    int count = 1;
    // Find the length of LL
    while(curr->next!=nullptr){
        curr = curr->next;
        count++;
    }
    if (n == count) {
        return head->next;
    }
    int i = 1;
    // Reach at the location
    while(i<count-n){
        point=point->next;
        i++;
    }
    point->next = point->next->next;
    return head;

    }
};


// Using Fast SLow pointer
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // fast ko n steps aage le jao
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // Dono ko saath move karo
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // slow ke next ko delete karo
        slow->next = slow->next->next;

        return dummy->next;
    }
};