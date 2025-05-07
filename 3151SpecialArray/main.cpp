#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution
{
    bool checkParity(int num)
    {
        if (num % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    bool isArraySpecial(vector<int> &nums)
    {
        bool boolForParity = checkParity(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            if (checkParity(nums[i]) == boolForParity)
            {
                return false;
            }
            boolForParity = checkParity(nums[i]);
        }
        return true;
    }
};

int main()
{
    vector<int> nums = {4, 3, 1, 6};
    Solution sol;
    cout << sol.isArraySpecial(nums);
    return 0;
}
