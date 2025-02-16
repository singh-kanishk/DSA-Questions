
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++)
        {
            if (map.find(target - nums[i]) != map.end()) // Check if complement is in the map
            {
                ans.push_back(map[target - nums[i]]); // Push the index of the complement
                ans.push_back(i);                     // Push the current index
                return ans;                           // Return the result immediately
            }

            // if (map.find(nums[i]) == map.end())
            // {
            //     ans.push_back(map[nums[i]]);
            //     ans.push_back(i);
            //     return ans;
            // }
            else
            {
                map[target - nums[i]] = i;
            }
        }
        return ans;
    }
    void print(vector<int> vec)
    {
        for (int i : vec)
        {
            cout << vec[i];
        }
    }
};

int main()
{
    vector<int> vec = {2, 7, 11, 15};
    Solution sol;
    vector<int> hello = sol.twoSum(vec, 9);
    sol.print(hello);
    return 0;
}