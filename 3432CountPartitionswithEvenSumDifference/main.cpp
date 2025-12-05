#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPartitions(vector<int> &nums)
    {
        int countOdd = 0;
        for (int n : nums)
        {
            if (n % 2 != 0)
            {
                countOdd++;
            }
        }
        if (countOdd % 2 == 0)
        {
            return nums.size() - 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    vector<int> num = {10, 10, 3, 7, 6};
    Solution sol;
    cout<<sol.countPartitions(num);
    return 0;
}