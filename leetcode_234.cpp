// Palindrome Linked List
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return true;

        // 1. Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != nullptr &&
               fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Reverse second half
        ListNode* prev = nullptr;
        ListNode* curr = slow->next;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        // 3. Compare both halves
        ListNode* first = head;
        ListNode* second = prev;

        while (second != nullptr) {
            if (first->val != second->val)
                return false;

            first = first->next;
            second = second->next;
        }

        return true;
    }
};