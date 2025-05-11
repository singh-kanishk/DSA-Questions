#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int ans = 1;
        vector<int> vec;
        bool hasZero = false;
        bool hasMultipleZero = false;
        for (int i : nums)
        {
            if (i != 0)
                ans *= i;
            else if (hasZero == true)
            {
                hasMultipleZero = true;
            }
            else
                hasZero = true;
        }
        cout << "answer " << ans << endl;

        if (hasMultipleZero)
        {
            vec.assign(nums.size() - 1, 0);
            for (int i : vec)
            {
                cout << i << endl;
            }
            return vec;
        }

        for (int i = 0; i < nums.size(); ++i)
        {
            if (hasZero == false)
                vec.push_back(ans / nums[i]);
            else
            {
                if (nums[i] != 0)
                {
                    vec.push_back(0);
                }
                else
                {
                    vec.push_back(ans);
                }
            }
        }
        return vec;
    }
};

int main()
{
    vector<int> ans = {0, 0};
    Solution sol;
    vector<int> vec = sol.productExceptSelf(ans);
    for (int i : vec)
    {
        cout << i << endl;
    }
    return 0;
}