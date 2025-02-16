#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    // Function to get the k-th ListNode from the current head
    ListNode* nextHeadToModify(ListNode* currHead, int k) {
        for (int i = 0; i < k; ++i) {
            if (!currHead) return nullptr; // If less than k nodes left, return nullptr
            currHead = currHead->next;
        }
        return currHead; // If exactly k nodes exist, return valid pointer
    }

    // Function to reverse k ListNodes in a group and return the new head
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head) return nullptr; // Edge case: empty list
        bool nextCheck=true;
        ListNode *prev = nullptr, *curr = head;
        ListNode *nextHead = nextHeadToModify(head, k);
        if(!nextHead->next){
            nextCheck=false;
        }
        if (!nextHead && k > 1) return head; // Do NOT reverse if remaining nodes < k

        // Reverse k nodes
        while (curr != nextHead) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        if(!nextCheck){
             while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        }
        // Connect the reversed part to the next reversed group
        head->next = reverseKGroup(nextHead, k);

        return prev; // Return new head after reversal
    }

    // Utility function to print the list
    void printList(ListNode* head) {
        while (head) {
            cout << head->val << " -> ";
            head = head->next;
        }
        cout << "NULL" << endl;
    }
};

// **Main function**
int main() {
    Solution solution;

    // Test Case: 1 -> 2 -> NULL, k = 2
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);

    cout << "Original List: ";
    solution.printList(head);

    head = solution.reverseKGroup(head, 2); // Reverse in groups of 2

    cout << "Reversed List in Groups of 2: ";
    solution.printList(head);

    return 0;
}
