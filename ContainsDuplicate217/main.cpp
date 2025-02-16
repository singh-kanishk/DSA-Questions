#include <iostream>
#include <unordered_map>
#include <vector>
#include <unordered_set>

using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> set;
        for (int n = 0; n < nums.size(); n++)
        {
            auto finder = set.find(nums.at(n));
            if (finder == set.end())
            {
                set.insert(nums.at(n));
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {1, 2, 3, 4};
    cout << sol.containsDuplicate(arr);
    return 0;
}
