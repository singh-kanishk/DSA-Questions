#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int recursion(vector<int> &nums, int a, int b)
    {
        int mid = (a + b) / 2;
        if(nums.size()<=1) return nums.at(mid);
        
    }
    int findMin(vector<int> &nums)
    {
        return recursion(nums, 0, nums.size() - 1);
    }
};

int main()
{
    vector<int> vec = {3, 4, 5, 1, 2};
    Solution sol;
    cout << sol.findMin(vec);
    return 0;
}