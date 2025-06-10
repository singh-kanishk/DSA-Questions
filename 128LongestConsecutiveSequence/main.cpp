#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxStreak = 0;

        for (int num : numSet)
        {

            if (numSet.find(num - 1) == numSet.end())
            {
                int currentNum = num;
                int currentStreak = 1;

                while (numSet.find(currentNum + 1) != numSet.end())
                {
                    currentNum++;
                    currentStreak++;
                }

                maxStreak = max(maxStreak, currentStreak);
            }
        }

        return maxStreak;
    }
};
int main()
{
    vector<int> vec = {100, 4, 200, 1, 3, 2};

    Solution sol;
    cout << sol.longestConsecutive(vec);

    return 0;
}
