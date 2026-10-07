//  Middle of the Linked List


// (Complete Code)



#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

ListNode* middleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    // Array → Linked List
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;

    for (int i = 1; i < n; i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }

    // Middle se start hone wali list
    ListNode* middle = middleNode(head);

    // Middle se end tak print
    while (middle != nullptr) {
        cout << middle->val << " ";
        middle = middle->next;
    }

    return 0;
}
