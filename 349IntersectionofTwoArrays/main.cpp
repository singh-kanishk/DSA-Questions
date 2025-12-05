#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> map;
        vector<int> ans;
        for (int i : nums1)
        {
            map[i]=1;
        }
        for (int i : nums2)
        {
            if ((map.find(i) != map.end()) && map.at(i) <= 1)
            {
                ans.push_back(i);
                map.at(i)++;
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> num1={1, 2, 2, 1}, num2={2, 2}, ans;
    
    Solution sol;
    ans = sol.intersection(num1, num2);
    cout<<"answer\n";
    for (int i : ans)
    {
        cout << i << '\n';
    }
    return 0;
}