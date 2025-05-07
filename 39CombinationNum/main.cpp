#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        for (int i = 0; i < candidates.size(); i++)
        {
            if (target % candidates.at(i) == 0)
            {
                for (int a; a < target / candidates.at(i); a++)
                {
                    
                }
            }
        }
    }
};

int main()
{
    Solution sol;
    vector<int> vec = {2, 3, 6, 7};
    vector<vector<int>> result = sol.combinationSum(vec, 7);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result.at(i).size(); j++)
        {
            cout << ' '
                 << result.at(i).at(j);
        }
        cout << '\n';
    }

    return 0;
}