// Double a Number Represented as a Linked List
#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* doubleIt(ListNode* head) {

        // Add an extra node if the first digit is >= 5
        if (head->val >= 5) {
            ListNode* newNode = new ListNode(0);
            newNode->next = head;
            head = newNode;
        }

        ListNode* curr = head;

        // Double every digit and handle carry
        while (curr != nullptr) {

            curr->val = curr->val * 2;

            if (curr->next != nullptr &&
                curr->next->val >= 5) {
                curr->val++;
            }

            curr->val %= 10;

            curr = curr->next;
        }

        return head;
    }
};
