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
public:
    ListNode *recursion(ListNode *list1, ListNode *list2)
    {
        // Base case: if one list is empty, return the other
        if (list1 == nullptr)
            return list2;
        if (list2 == nullptr)
            return list1;

        // Recursive case: choose the smaller node
        if (list1->val < list2->val)
        {
            list1->next = recursion(list1->next, list2);
            return list1;
        }
        else
        {
            list2->next = recursion(list1, list2->next);
            return list2;
        }
    }

    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        return recursion(list1, list2);
    }
};
