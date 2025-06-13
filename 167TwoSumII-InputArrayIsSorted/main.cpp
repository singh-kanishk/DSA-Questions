#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int n = numbers.size();
        int i = 0;
        int j = n - 1;

        while (i < j)
        {
            int sum = numbers[i] + numbers[j];
            if (sum == target)
                return {i + 1, j + 1};
            if (sum < target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return {};
    }
};

int main()
{
    vector<int> vec = {2, 7, 11, 15};
    vector<int> ans;
    Solution sol;
    ans = sol.twoSum(vec, 18);
    for (int i : ans)
    {
        cout << " " << i;
    }

    return 0;
}

/*
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        unordered_map<int, int> mp;
        vector<int> ans;
        for (int i = 0; i <= numbers.size() - 1; i++)
        {
            if (mp.count(numbers.at(i)))
            {
                ans.push_back(++mp[numbers.at(i)]);
                ans.push_back(++i);
                break;
            }
            mp.insert({target - numbers.at(i), i});
        }
        return ans;
    }
};
*/