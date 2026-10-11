// Add Two Numbers
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int x = 0;
            int y = 0;

            if (l1 != nullptr) {
                x = l1->val;
            }

            if (l2 != nullptr) {
                y = l2->val;
            }

            int sum = x + y + carry;
            carry = sum / 10;

            curr->next = new ListNode(sum % 10);
            curr = curr->next;

            if (l1 != nullptr) {
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                l2 = l2->next;
            }
        }

        return dummy->next;
    }
};