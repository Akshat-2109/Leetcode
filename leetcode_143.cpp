// Reorder List
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


// N^2 time complexity me solution
class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return;

        ListNode* temp = head;

        while (temp != nullptr && temp->next != nullptr &&
               temp->next->next != nullptr) {

            ListNode* prev = temp;
            ListNode* curr = temp->next;

            while (curr->next != nullptr) {
                prev = curr;
                curr = curr->next;
            }

            prev->next = nullptr;
            curr->next = temp->next;
            temp->next = curr;

            temp = curr->next;
        }
    }
};


// Optimal solution O(N)
class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return;

        // Middle node find kra
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // second half ko reverse kiya
        ListNode* curr = slow->next;
        slow->next = nullptr;
        ListNode* prev = nullptr;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        // dono ko alternatively merge kiya
        ListNode* first = head;
        ListNode* second = prev;

        while (second != nullptr) {
            ListNode* firstNext = first->next;
            ListNode* secondNext = second->next;

            first->next = second;
            second->next = firstNext;

            first = firstNext;
            second = secondNext;
        }
    }
};