// Solving in most basic method as possible not optimized

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> ans;
        if (nums.empty())
        {
            return ans;
        }

        sort(nums.begin(), nums.end());

        int i = nums.size() - 2;
        ans.push_back(nums.at(i + 1));
        while (ans.size() < k)
        {
            if (ans.at(ans.size() - 1) != nums.at(i))
            {
                ans.push_back(nums.at(i));
            }
            i--;
        }
        return ans;
    }
};

int main()
{
    vector<int> vec = {1, 1, 1, 2, 2, 3};
    Solution sol;
    vector<int> ans = sol.topKFrequent(vec, 2);
    for (int i : ans)
    {
        cout << " " << i << " ";
    }

    return 0;
}
/*
int array[]={1,2,3,4,5,6} (2)


*/