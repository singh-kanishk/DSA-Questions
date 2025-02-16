#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
    void divideLists(vector<ListNode*>& lists,int a,int b){
    int mid=(a+b)/2;
    divideLists(lists,a,mid);
    divideLists(lists,mid,b);
    
    }
    ListNode* sortTwoList(ListNode *list1, ListNode *list2){
       if (list1 == nullptr)
            return list2;
        if (list2 == nullptr)
            return list1;

        // Recursive case: choose the smaller node
        if (list1->val < list2->val)
        {
            list1->next = sortTwoList(list1->next, list2);
            return list1;
        }
        else
        {
            list2->next = sortTwoList(list1, list2->next);
            return list2;
        }
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
    }
};

int main() {
    return 0;
}