#include <iostream>
#include <vector>

using namespace std;
struct ListNode
{
    int val;
    ListNode *link;
    ListNode() : val(0), link(nullptr) {}
    ListNode(int x) : val(x), link(nullptr) {}
    ListNode(int x, ListNode *link) : val(x), link(link) {}
};
class Solution
{
    ListNode *nextToModify(ListNode *head, int n)
    {
        ListNode *currHead = head;
        for (int i = 0; i < n; i++)
        {
            if (currHead == nullptr)
            {
                return head;
            }
            currHead = currHead->link;
        }
        return currHead;
    }
    void reverseNode(ListNode*head,int n)
    {
        
    }

public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
    }
};
int main()
{
    return 0;
}