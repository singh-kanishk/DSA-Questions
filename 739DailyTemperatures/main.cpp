#include <bits/stdc++.h>
using namespace std;


class Solution
{
    int maxSoFar;

public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        maxSoFar = temperatures[n - 1];

        for (int i = n - 2; i >= 0; --i)
        {
            int l = i + 1;

            
            if (temperatures[i] >= maxSoFar)
            {
                maxSoFar = temperatures[i];
                continue;
            }

            
            while (l < n && temperatures[l] <= temperatures[i])
            {
                if (ans[l] == 0)
                {
                    l = n; 
                    break;
                }
                l = l + ans[l]; 
            }

            if (l < n)
            {
                ans[i] = l - i;
            }
        }

        return ans;
    }
};


int main()
{
    vector<int> ans = {73, 74, 75, 71, 69, 72, 76, 73};
    Solution sol;
    vector<int> vec = sol.dailyTemperatures(ans);
    for (int i : vec)
    {
        cout << " " << i;
    }
    return 0;
}
