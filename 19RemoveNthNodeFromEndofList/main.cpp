#include <iostream>
#include <vector>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
    int length(ListNode *head)
    {
        ListNode *curr = head;
        int k = 0;
        while (curr != nullptr)
        {
            curr = curr->next;
            k++;
        }
        return k;
    }

public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (length(head) < n)
        {
            return head;
        }
        else if (length(head) == n)
        {
            head = head->next;
            return head;
        }
        ListNode *curr = head;
        for (int i = 0; i < length(head) - n - 1; i++)
        {
            curr = curr->next;
        }
        ListNode *toRemove = curr->next;
        curr->next = toRemove->next;
        return head;
    }
};
int main()
{
    return 0;
}