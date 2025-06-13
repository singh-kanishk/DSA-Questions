#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {
        if (height.size() <= 2)
            return 0;

        for (int i = 0; i < height.size(); i++)
    }
};

int main()
{
    vector<int> vec = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    Solution sol;
    cout << sol.trap(vec);

    return 0;
}