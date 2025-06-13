#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int i = 0;
        int j = 1;
        int k = 2;
        while (i < nums.size() - 2)
        {
            while (j < nums.size() - 1)
            {
                while (k < nums.size())
                {
                    if (nums.at(i) + nums.at(j) + nums.at(k) == 0)
                    {
                        ans.push_back({nums.at(i), nums.at(j), nums.at(k)});
                    }
                    k++;
                }
                j++;
                k = j + 1;
            }
            i++;
            j = i + 1;
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    return 0;
}