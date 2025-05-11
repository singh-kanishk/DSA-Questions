#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> vec;
        map<int, int> mp;
        int highest = 0;
        int ans;
        for (int i : nums)
        {

            if (mp.find(i) != mp.end())
            {
                mp.insert(i, 1);
                        }
            else
            {
                mp[i]++;
            }
            if (mp[i] > highest)
            {
                highest = mp[i];
                ans = i;
            }
        }
    }
};

int main()
{
    Solution sol;

    return 0;
}
/*
int array[]={1,2,3,4,5,6} (2)


*/